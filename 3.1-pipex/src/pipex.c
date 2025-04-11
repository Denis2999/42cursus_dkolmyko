/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolmyko <dkolmyko@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 16:08:19 by dkolmyko          #+#    #+#             */
/*   Updated: 2025/04/11 17:04:58 by dkolmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	execute_vector(char *arg_vector, char **env_vector)
{
	char	**command;
	char	*path;

	command = ft_split(arg_vector, ' ');
	path = get_path(command[0], env_vector);
	if (execve(path, command, env_vector) == -1)
	{
		ft_putstr_fd("pipex: command not found: ", 2);
		ft_putendl_fd(command[0], 2);
		ft_free(command);
		exit(127);
	}
}

void	handle_child(char **arg_vector, int *pipe_fd, char **env_vector)
{
	int	file_descriptor;

	file_descriptor = open_file(arg_vector[1], 0);
	dup2(file_descriptor, 0);
	dup2(pipe_fd[1], 1);
	close(pipe_fd[0]);
	if (ft_strlen(arg_vector[2]) == 0)
	{
		ft_putstr_fd("pipex: empty command\n", 2);
		exit(1);
	}
	else
	{
		execute_vector(arg_vector[2], env_vector);
	}
}

void	handle_parent(char **arg_vector, int *pipe_fd, char **env_vector)
{
	int	file_descriptor;

	file_descriptor = open_file(arg_vector[4], 1);
	dup2(file_descriptor, 1);
	dup2(pipe_fd[0], 0);
	close(pipe_fd[1]);
	if (ft_strlen(arg_vector[3]) == 0)
	{
		ft_putstr_fd("pipex: empty command\n", 2);
		exit(1);
	}
	else
	{
		execute_vector(arg_vector[3], env_vector);
	}
}

int	main(int arg_count, char **arg_vector, char **env_vector)
{
	int		pipe_fd[2];
	pid_t	current_process_id;

	if (arg_count != 5)
	{
		ft_putstr_fd("./pipex infile cmd cmd outfile\n", 2);
		exit(EXIT_FAILURE);
	}
	if (pipe(pipe_fd) == -1)
		exit(EXIT_FAILURE);
	current_process_id = fork();
	if (current_process_id == -1)
		exit(EXIT_FAILURE);
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

// My tests I used test.sh file
// # echo "1. Simple ls and wc:"
// # echo "Hello World" >input.txt
// # ./pipex input.txt "wc" "cat -e" output.txt
// # cat output.txt
// #
// # echo "Hello World" >input.txt
// # wc input.txt | cat -e >output.txt
// # cat output.txt
// #
// #########################
// #
// # echo "2. grep and sort:"
// # echo "apple\nbanana\ncherry\ndate" > input.txt
// # ./pipex input.txt "grep a" "sort -r" output.txt
// # cat output.txt
// #
// # echo "apple\nbanana\ncherry\ndate" > input.txt
// # grep 'a' input.txt | sort -r > output.txt
// # cat output.txt
// #
// #########################
// #
// # echo "3. cat and tr:"
// # echo "hello world" > input.txt
// # ./pipex input.txt "cat" "tr 'a-z' 'A-Z'" output.txt
// # cat output.txt
// #
// # echo "hello world" > input.txt
// # cat input.txt | tr 'a-z' 'A-Z' > output.txt
// # cat output.txt
// #
// #########################
// #
// # echo "1. Invalid Input File:"
// # ./pipex non_existent_file "ls -l" "wc -l" output.txt
// #
// # ls -l non_existent_file | wc -l > output.txt # This will produce an error
// #
// #########################
// #
// # echo "2. Invalid Command:"
// # ./pipex input.txt "invalid_command" "wc -l" output.txt
// #
// # invalid_command | wc -l > output.txt #  This will produce an error
