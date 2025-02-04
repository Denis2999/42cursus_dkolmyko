/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolmyko <dkolmyko@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 16:48:46 by dkolmyko          #+#    #+#             */
/*   Updated: 2024/08/24 10:22:25 by dkolmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2_output(int counter_a, int counter_b)
{
	char	buffer[5];

	buffer[0] = counter_a / 10 + '0';
	buffer[1] = counter_a % 10 + '0';
	buffer[2] = ' ';
	buffer[3] = counter_b / 10 + '0';
	buffer[4] = counter_b % 10 + '0';
	write(1, buffer, 5);
	if (!(counter_a == 98 && counter_b == 99))
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	counter_a;
	int	counter_b;

	counter_b = 0;
	counter_a = 0;
	while (counter_a <= 99)
	{
		counter_b = counter_a + 1;
		while (counter_b <= 99)
		{
			ft_print_comb2_output(counter_a, counter_b);
			counter_b++;
		}
		counter_a++;
	}
}
