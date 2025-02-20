/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_character.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolmyko <dkolmyko@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 12:03:25 by dkolmyko          #+#    #+#             */
/*   Updated: 2025/02/20 10:43:03 by dkolmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	display_character(char one_char)
{
	if (write(1, &one_char, 1) == -1)
	{
		return (-1);
	}
	return (1);
}
