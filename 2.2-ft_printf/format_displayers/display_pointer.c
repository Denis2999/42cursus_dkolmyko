/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_pointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolmyko <dkolmyko@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 18:30:52 by dkolmyko          #+#    #+#             */
/*   Updated: 2025/02/20 10:41:11 by dkolmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	handle_pointer(uintptr_t addres)
{
	char	*characters;
	int		counter;

	characters = "0123456789abcdef";
	counter = 0;
	if (addres >= 16)
	{
		counter += handle_pointer(addres / 16);
		counter += handle_pointer(addres % 16);
	}
	else
	{
		counter += display_character(characters[addres]);
	}
	if (counter < 0)
	{
		return (-1);
	}
	return (counter);
}

int	display_pointer(uintptr_t addres)
{
	int	counter;

	counter = 0;
	if (!addres)
	{
		return (display_string("(nil)"));
	}
	counter += display_string("0x");
	if (counter < 0)
	{
		return (-1);
	}
	counter += handle_pointer(addres);
	if (counter < -1)
	{
		return (-1);
	}
	return (counter);
}
