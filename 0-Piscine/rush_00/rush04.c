/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkurowsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 19:04:36 by mkurowsk          #+#    #+#             */
/*   Updated: 2024/08/25 15:42:42 by szych            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <ctype.h>
#include <stdlib.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	size_x;
	int	size_y;

	size_y = 1;
	while (size_y <= y)
	{
		size_x = 1;
		while (size_x <= x)
		{
			if ((size_y == 1 && size_x == 1)
				|| (size_y == y && size_x == x && y != 1 && x != 1))
				ft_putchar('A');
			else if ((size_y == 1 && size_x == x)
				|| (size_y == y && size_x == 1))
				ft_putchar('C');
			else if (size_y == 1 || size_y == y
				|| size_x == 1 || size_x == x)
				ft_putchar('B');
			else
				ft_putchar(' ');
			size_x++;
		}
		write (1, "\n", 1);
		size_y++;
	}
}
