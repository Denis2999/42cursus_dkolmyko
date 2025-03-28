/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolmyko <dkolmyko@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 16:06:05 by dkolmyko          #+#    #+#             */
/*   Updated: 2025/03/28 16:59:51 by dkolmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <stdio.h>

# include "../libft/libft.h"
# include <unistd.h>
# include <sys/wait.h>
# include <fcntl.h>

int		main(int arg_count, char **arg_vector, char **env_vector);
int		open_file(char *file_name, int flag);
void	ft_free(char *array[]);
char	*get_path(char *cmd, char **env);

#endif
