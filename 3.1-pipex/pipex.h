/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolmyko <dkolmyko@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 16:06:05 by dkolmyko          #+#    #+#             */
/*   Updated: 2025/03/26 12:20:18 by dkolmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
#define PIPEX_H

#include <stdio.h>

#include "libft/libft.h"
#include <unistd.h>
#include <sys/wait.h>
#include <fcntl.h>

int main(int argument_count, const char *argument_vector[], const char *environment_vector[]);

#endif
