/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_hexadecimal.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolmyko <dkolmyko@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 14:23:04 by dkolmyko          #+#    #+#             */
/*   Updated: 2025/02/20 10:44:39 by dkolmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	display_hexadecimal(unsigned int integer, char format)
{
	const char	*hex;
	int			counter;

	counter = 0;
	if (format == 'x')
	{
		hex = "0123456789abcdef";
	}
	else
	{
		hex = "0123456789ABCDEF";
	}
	if (integer > 15)
	{
		counter += display_hexadecimal(integer / 16, format);
		counter += display_hexadecimal(integer % 16, format);
	}
	else
	{
		counter += display_character(hex[integer]);
	}
	return (counter);
}
