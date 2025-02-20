/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_string.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolmyko <dkolmyko@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 08:48:25 by dkolmyko          #+#    #+#             */
/*   Updated: 2025/02/20 10:43:34 by dkolmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	display_string(const char *string)
{
	int	counter;

	counter = 0;
	if (string)
	{
		while (*string)
		{
			counter += display_character(*string);
			string++;
		}
	}
	else
	{
		counter += display_string("(null)");
	}
	return (counter);
}
