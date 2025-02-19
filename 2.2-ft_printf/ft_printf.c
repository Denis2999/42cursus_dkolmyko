/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolmyko <dkolmyko@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 20:28:30 by dkolmyko          #+#    #+#             */
/*   Updated: 2025/02/19 20:44:38 by dkolmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int check_conversion(const char *character, va_list arguments)
{
	int attachment_lenght = 0;

	if (*character == 'c')
	{
		char one_char = (char)va_arg(arguments, int);
		attachment_lenght += display_character(one_char);
	}
	else if (*character == 's')
	{
		attachment_lenght += display_string(va_arg(arguments, char *));
	}
	else if (*character == 'p')
	{
		attachment_lenght += display_pointer(va_arg(arguments, uintptr_t));
	}
	else if (*character == 'd' || *character == 'i')
	{
		attachment_lenght += display_integer(va_arg(arguments, int));
	}
	else if (*character == 'u')
	{
		attachment_lenght += display_unsigned_integer(va_arg(arguments, unsigned int));
	}
	else if (*character == 'x' || *character == 'X')
	{
		attachment_lenght += display_hexadecimal((unsigned)va_arg(arguments, unsigned int), *character);
	}
	else if (*character == '%')
	{
		attachment_lenght += display_character('%');
	}

	return (attachment_lenght);
}

int ft_printf(const char *sentence, ...)
{
	int i = 0;
	int length = 0;
	va_list arguments;

	va_start(arguments, sentence);
	while (sentence[i])
	{
		if (sentence[i] == '%')
		{
			length += check_conversion(&sentence[++i], arguments);
			if (length < 0)
			{
				return (-1);
			}
		}
		else
		{
			length += display_character(sentence[i]);
			if (length < 0)
			{
				return (-1);
			}
		}
		i++;
	}

	va_end(arguments);
	return (length);
}
