/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolmyko <dkolmyko@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 12:16:47 by dkolmyko          #+#    #+#             */
/*   Updated: 2025/03/28 11:41:07 by dkolmyko         ###   ########.fr       */
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

int ft_strcmp(char *s1, char *s2)
{
	int i;
	int diff;

	i = 0;
	diff = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		diff = s1[i] - s2[i];
		if (diff != 0)
		{
			return (diff);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

// To debug functions below:
char *my_getenv(char *name, char **env)
{
	int i;
	int j;
	char *sub;

	i = 0;
	while (env[i])
	{
		j = 0;
		while (env[i][j] && env[i][j] != '=')
			j++;
		sub = ft_substr(env[i], 0, j);
		if (ft_strcmp(sub, name) == 0)
		{
			free(sub);
			return (env[i] + j + 1);
		}
		free(sub);
		i++;
	}
	return (NULL);
}

char *get_path(char *cmd, char **env)
{
	int i;
	char *exec;
	char **allpath;
	char *path_part;
	char **s_cmd;

	i = -1;
	allpath = ft_split(my_getenv("PATH", env), ':');
	s_cmd = ft_split(cmd, ' ');
	while (allpath[++i])
	{
		path_part = ft_strjoin(allpath[i], "/");
		exec = ft_strjoin(path_part, s_cmd[0]);
		free(path_part);
		if (access(exec, F_OK | X_OK) == 0)
		{
			ft_free(s_cmd);
			return (exec);
		}
		free(exec);
	}
	ft_free(allpath);
	ft_free(s_cmd);
	return (cmd);
}