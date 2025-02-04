/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolmyko <dkolmyko@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 10:10:19 by dkolmyko          #+#    #+#             */
/*   Updated: 2024/09/04 09:39:27 by dkolmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_itoa(int nb, char buffer[], int *index)
{
	if (nb == 0)
	{
		buffer[(*index)++] = '0';
	}
	else
	{
		while (nb > 0)
		{
			buffer[(*index)++] = nb % 10 + '0';
			nb /= 10;
		}
	}
}

void	ft_putnbr(int nb)
{
	char	buffer[10];
	int		index;

	index = 0;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	ft_itoa(nb, buffer, &index);
	while (index > 0)
	{
		write(1, &buffer[--index], 1);
	}
}
