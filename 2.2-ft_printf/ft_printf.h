/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolmyko <dkolmyko@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 18:49:23 by dkolmyko          #+#    #+#             */
/*   Updated: 2025/02/16 12:22:39 by dkolmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 5
#endif

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int ft_printf(const char *sentence, ...);
int check_conversion(const char *character, va_list arguments);
char *ft_itoa(int n);

#endif
