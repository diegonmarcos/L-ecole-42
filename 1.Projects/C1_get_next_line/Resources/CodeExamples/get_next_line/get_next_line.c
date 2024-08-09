/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofernand <ofernand@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 12:02:29 by ofernand          #+#    #+#             */
/*   Updated: 2024/06/26 19:34:41 by ofernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_calloc(size_t n, size_t size)
{
	char	*ptr;
	size_t	i;

	ptr = (char *)malloc(n * size);
	if (!ptr)
		return (0);
	i = 0;
	while (i < n * size)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}

static char	*ft_trim_line(char *buffer)
{
	char	*line;
	int		i;

	i = 0;
	if (!buffer[i])
		return (NULL);
	while (buffer[i] != '\n' && buffer[i])
		i++;
	line = ft_calloc(sizeof(char), i + 2);
	if (!line)
		return (NULL);
	i = 0;
	while (buffer[i] && buffer[i] != '\n')
	{
		line[i] = buffer[i];
		i++;
	}
	if (buffer[i] == '\n')
		line[i] = '\n';
	return (line);
}

static char	*ft_keep_surplus(char *buffer)
{
	char	*new_buffer;
	int		i;
	int		j;

	i = 0;
	while (buffer[i] != '\n' && buffer[i])
		i++;
	if (!buffer[i])
	{
		free(buffer);
		return (NULL);
	}
	new_buffer = ft_calloc(sizeof(char), ft_strlen(buffer) - i + 1);
	i++;
	j = 0;
	while (buffer[i])
	{
		new_buffer[j] = buffer[i];
		i++;
		j++;
	}
	new_buffer[j] = '\0';
	free(buffer);
	return (new_buffer);
}

static char	*ft_get_buffer(int fd, char *buffer)
{
	char		*tmp_str;
	int			byte_ctrl;

	tmp_str = ft_calloc(sizeof(char), BUFFER_SIZE + 1);
	byte_ctrl = 1;
	while (ft_strchr(buffer, '\n') == NULL && byte_ctrl != 0)
	{
		byte_ctrl = read(fd, tmp_str, BUFFER_SIZE);
		if (byte_ctrl == -1)
		{
			free(buffer);
			free(tmp_str);
			return (NULL);
		}
		tmp_str[byte_ctrl] = '\0';
		buffer = ft_strjoin(buffer, tmp_str);
	}
	free(tmp_str);
	return (buffer);
}

char	*get_next_line(int fd)
{
	char		*new_line;
	static char	*buffer;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = ft_get_buffer(fd, buffer);
	if (!buffer)
		return (NULL);
	new_line = ft_trim_line(buffer);
	buffer = ft_keep_surplus(buffer);
	return (new_line);
}
