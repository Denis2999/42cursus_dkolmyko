/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolmyko <dkolmyko@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 18:49:23 by dkolmyko          #+#    #+#             */
/*   Updated: 2025/02/20 10:45:58 by dkolmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

# include <stdio.h>

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <limits.h>
# include <stdint.h>

int	ft_printf(const char *sentence, ...);
int	display_character(char character);
int	display_string(const char *attachment);
int	display_integer(int num);
int	display_unsigned_integer(unsigned int integer);
int	display_hexadecimal(unsigned int integer, char format);
int	display_pointer(uintptr_t addres);

#endif
