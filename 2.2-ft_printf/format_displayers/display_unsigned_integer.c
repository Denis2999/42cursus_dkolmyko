/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_unsigned_integer.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolmyko <dkolmyko@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 12:41:27 by dkolmyko          #+#    #+#             */
/*   Updated: 2025/02/19 13:06:49 by dkolmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int display_unsigned_integer(unsigned int integer)
{
	int counter = 0;

	if (integer > 9)
	{
		counter += display_integer(integer / 10);
	}
	counter += display_character((integer % 10) + '0');

	return counter;
}
