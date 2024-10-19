#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

int	*ft_get_line_lens_loop(int file, int *file_sizes) //Reading the file to determine the length of each line and storing it in the file_sizes array.
{
	char	c;
	int		i;
	int		line_index;

	c = 0;
	i = 0;
	line_index = -1;
	while (read(file, &c, 1))
	{
		if (c == '\n')
		{
			if (i >= 0 && line_index >= 0)
				file_sizes[line_index + 1] = i;
			i = -1;
		}
		if (i == 0)
			line_index++;
		i++;
	}
	return (file_sizes);
}

int	ft_get_lines_read_c(char c, int *index[2], int *file_sizes, char ***lines) //Filling the lines and making updates to the array according to the character read.
{
	if (c == '\n')
	{
		if (*index[0] >= 0)
			(*lines)[*index[1]][*index[0]] = 0;
		*index[0] = -1;
	}
	if (*index[0] == 0)
	{
		(*index[1])++;
		(*lines)[*index[1]] = malloc(sizeof(char)
				* (file_sizes[*index[1] + 1] + 1));
		if ((*lines)[*index[1]] == NULL)
			return (-1);
	}
	if (*index[0] >= 0)
		(*lines)[*index[1]][*index[0]] = c;
	(*index[0])++;
	return (0);
}

int	ft_get_lines_loop(int file, int *file_sizes, char ***lines) //Reading the file character by character to get the lines and updating the line lengths with file_sizes.
{
	char	c;
	int		i;
	int		line_index;
	int		read_res;
	int		*line_indices[2];

	c = 0;
	i = 0;
	line_index = -1;
	while (read(file, &c, 1))
	{
		line_indices[0] = &i;
		line_indices[1] = &line_index;
		read_res = ft_get_lines_read_c(c, line_indices, file_sizes, lines);
		if (read_res == -1)
			return (-1);
	}
	(*lines)[line_index + 1] = NULL;
	return (0);
}
