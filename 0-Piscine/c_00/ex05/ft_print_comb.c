/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolmyko <dkolmyko@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 10:16:11 by dkolmyko          #+#    #+#             */
/*   Updated: 2024/08/22 17:47:38 by dkolmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb_output(char counter_a, char counter_b, char counter_c)
{
	char	buffer[3];

	buffer[0] = counter_a;
	buffer[1] = counter_b;
	buffer[2] = counter_c;
	write(1, buffer, 3);
	if (!(counter_a == '7' && counter_b == '8' && counter_c == '9'))
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	counter_a;
	char	counter_b;
	char	counter_c;

	counter_a = '0';
	while (counter_a <= '7')
	{
		counter_b = counter_a + 1;
		while (counter_b <= '8')
		{
			counter_c = counter_b + 1;
			while (counter_c <= '9')
			{
				ft_print_comb_output(counter_a, counter_b, counter_c);
				counter_c++;
			}
			counter_b++;
		}
		counter_a++;
	}
}
