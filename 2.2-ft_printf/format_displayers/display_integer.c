/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_integer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolmyko <dkolmyko@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 09:12:36 by dkolmyko          #+#    #+#             */
/*   Updated: 2025/02/20 10:44:17 by dkolmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	display_integer(int integer)
{
	int	counter;

	counter = 0;
	if (integer == INT_MIN)
	{
		counter += display_string("-2147483648");
		return (counter);
	}
	if (integer < 0)
	{
		counter += display_character('-');
		integer = -integer;
	}
	if (integer > 9)
	{
		counter += display_integer(integer / 10);
	}
	counter += display_character((integer % 10) + '0');
	return (counter);
}
