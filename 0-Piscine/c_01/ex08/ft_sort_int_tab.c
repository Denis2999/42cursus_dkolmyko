/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolmyko <dkolmyko@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 09:39:43 by dkolmyko          #+#    #+#             */
/*   Updated: 2024/08/27 09:52:31 by dkolmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	counter_a;
	int	counter_b;
	int	temp_val;

	counter_a = 0;
	counter_b = 0;
	while (counter_a < size - 1)
	{
		while (counter_b < size - 1 - counter_a)
		{
			if (tab[counter_b] > tab[counter_b + 1])
			{
				temp_val = tab[counter_b];
				tab[counter_b] = tab[counter_b + 1];
				tab[counter_b + 1] = temp_val;
			}
			counter_b++;
		}
		counter_b = 0;
		counter_a++;
	}
}
