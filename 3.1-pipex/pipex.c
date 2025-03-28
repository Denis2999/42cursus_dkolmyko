/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolmyko <dkolmyko@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 16:08:19 by dkolmyko          #+#    #+#             */
/*   Updated: 2025/03/28 13:26:57 by dkolmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void execute_vector(char *arg_vector, char **env_vector)
{
	char **splitted_cmd;
	char *path;

	splitted_cmd = ft_split(arg_vector, ' ');
	path = get_path(splitted_cmd[0], env_vector);
	if (execve(path, splitted_cmd, env_vector) == -1)
	{
		ft_putstr_fd("pipex: command not found: ", 2);
		ft_putendl_fd(splitted_cmd[0], 2);
		ft_free(splitted_cmd);
		exit(1);
	}
}

void handle_child(char **arg_vector, int *pipe_fd, char **env_vector)
{
	int file_descriptor;

	file_descriptor = open_file(arg_vector[1], 0);
	dup2(file_descriptor, 0);
	dup2(pipe_fd[1], 1);
	close(pipe_fd[0]);
	execute_vector(arg_vector[2], env_vector);
}

void handle_parent(char **arg_vector, int *pipe_fd, char **env_vector)
{
	int file_descriptor;

	file_descriptor = open_file(arg_vector[4], 1);
	dup2(file_descriptor, 1);
	dup2(pipe_fd[0], 0);
	close(pipe_fd[1]);
	execute_vector(arg_vector[3], env_vector);
}

int main(int arg_count, char **arg_vector, char **env_vector)
{
	int pipe_fd[2];
	pid_t current_process_id;

	if (arg_count != 5)
	{
		ft_putstr_fd("./pipex infile cmd cmd outfile\n", 2);
		exit(EXIT_FAILURE);
	}
	if (pipe(pipe_fd) == -1)
	{
		perror("pipe");
		exit(EXIT_FAILURE);
	}

	current_process_id = fork();
	if (current_process_id == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}

	if (current_process_id == 0)
	{
		handle_child(arg_vector, pipe_fd, env_vector);
	}
	else
	{
		handle_parent(arg_vector, pipe_fd, env_vector);
	}

	return (0);
}
