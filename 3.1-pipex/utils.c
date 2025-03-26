/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolmyko <dkolmyko@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 12:16:47 by dkolmyko          #+#    #+#             */
/*   Updated: 2025/03/26 15:52:36 by dkolmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int open_file(char *file_name, int flag)
{
	int file_descriptor;

	if (flag == 0)
	{
		file_descriptor = open(file_name, O_RDONLY);
	}
	else if (flag == 1)
	{
		file_descriptor = open(file_name, O_WRONLY | O_CREAT | O_TRUNC, 0777);
	}

	if (file_descriptor == -1)
	{
		perror("open");
		exit(1);
	}

	return file_descriptor;
}

void ft_free(char *array[])
{
	int i;

	i = 0;
	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);
}