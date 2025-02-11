/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolmyko <dkolmyko@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 18:07:32 by dkolmyko          #+#    #+#             */
/*   Updated: 2025/02/11 15:25:07 by dkolmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

static char	*_fill_line_buffer(int fd, char *left_c, char *buffer);
static char	*_set_line(char *line);

char	*get_next_line(int file_descript)
{
	static char	*tail[FD_LIMIT];
	char		*buffer;
	char		*output_line;

	buffer = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (file_descript < 0 || BUFFER_SIZE <= 0 || read(file_descript, 0, 0) < 0)
	{
		free(tail[file_descript]);
		free(buffer);
		tail[file_descript] = NULL;
		buffer = NULL;
		return (NULL);
	}
	if (!buffer)
	{
		free(buffer);
		return (NULL);
	}
	output_line = _fill_line_buffer(file_descript, tail[file_descript], buffer);
	free(buffer);
	buffer = NULL;
	if (!output_line)
		return (NULL);
	tail[file_descript] = _set_line(output_line);
	return (output_line);
}

static char	*_set_line(char *output_line)
{
	ssize_t	i;
	char	*tail;

	i = 0;
	while (output_line[i] != '\0' && output_line[i] != '\n')
	{
		i++;
	}
	if (output_line[i] == '\0' || output_line[i + 1] == '\0')
	{
		return (NULL);
	}
	tail = ft_substr(output_line, i + 1, ft_strlen(output_line) - i);
	if (tail && *tail == '\0')
	{
		free(tail);
		tail = NULL;
	}
	output_line[i + 1] = '\0';
	return (tail);
}

static char	*_fill_line_buffer(int file_descriptor, char *tail, char *buffer)
{
	ssize_t	buffer_reader;
	char	*temporary;

	buffer_reader = 1;
	while (buffer_reader > 0)
	{
		buffer_reader = read(file_descriptor, buffer, BUFFER_SIZE);
		if (buffer_reader == -1)
		{
			free(tail);
			return (NULL);
		}
		else if (buffer_reader == 0)
			break ;
		buffer[buffer_reader] = '\0';
		if (!tail)
			tail = ft_strdup("");
		temporary = tail;
		tail = ft_strjoin(temporary, buffer);
		free(temporary);
		temporary = NULL;
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	return (tail);
}

// int main()
// {

// 	int file_descriptor = open("test_file.txt", O_RDONLY);
// 	printf("fd of file.txt is %d\n", file_descriptor);

// 	////////////
// 	// char *line;
// 	// while ((line = get_next_line(file_descriptor)) != NULL)
// 	// { // Check return value!
// 	// 	printf("get_next_line is: %s\n", line);
// 	// 	free(line);	 // Free the returned line! Important!
// 	// 	line = NULL; // Good practice to prevent dangling pointers
// 	// }

// 	////////////

// 	// int chars_read;
// 	// char buf[256];
// 	// while ((chars_read = read(file_descriptor, buf, 5)))
// 	// {
// 	// 	if (ft_strchr(buf, '\n') != NULL)
// 	// 	{
// 	// 		break;
// 	// 	}
// 	// 	buf[chars_read] = '\0';
// 	// 	printf("buf => %s\n", buf);
// 	// }

// 	return 0;
// }
