#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include "rush02.h"

int	ft_get_line_number(const char *file_path) //Calculates the total number of lines in the specified file.
{
	int		file;
	char	c;
	int		i;
	int		line_index;

	file = open(file_path, O_RDONLY);
	if (file == -1)
		return (-1);
	c = 0;
	i = 0;
	line_index = 0;
	while (read(file, &c, 1))
	{
		if (c == '\n')
			i = -1;
		if (i == 0)
			line_index++;
		i++;
	}
	close(file);
	return (line_index);
}

int	*ft_get_line_lens(const char *file_path) //Creates an array holding the lengths of each line in the file.
{
	int		file;
	int		*line_lengths;

	line_lengths = malloc(sizeof(int) * (1 + ft_get_line_number(file_path)));
	if (line_lengths == NULL)
		return (NULL);
	line_lengths[0] = ft_get_line_number(file_path);
	file = open(file_path, O_RDONLY);
	if (file == -1 || line_lengths[0] == -1)
		return (NULL);
	if (ft_get_line_lens_loop(file, line_lengths) == NULL)
		return (NULL);
	close(file);
	return (line_lengths);
}

int	ft_get_lines(const char *file_path, char ***lines) //Reads the file and creates an array holding the lines.
{
	int			file;
	int			*line_lengths;
	const char	*default_file_path = "numbers.dict";

	if (file_path == NULL)
		file_path = default_file_path;
	line_lengths = ft_get_line_lens(file_path);
	file = open(file_path, O_RDONLY);
	if (line_lengths == NULL || file == -1)
		return (-1);
	*lines = malloc(sizeof(char *) * (line_lengths[0] + 1));
	if (*lines == NULL)
		return (-1);
	if (ft_get_lines_loop(file, line_lengths, lines) == -1)
		return (-1);
	free(line_lengths);
	close(file);
	return (0);
}
