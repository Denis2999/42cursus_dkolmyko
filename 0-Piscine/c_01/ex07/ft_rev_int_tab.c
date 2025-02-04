/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolmyko <dkolmyko@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 09:39:43 by dkolmyko          #+#    #+#             */
/*   Updated: 2024/08/27 09:50:26 by dkolmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	counter;
	int	temp_val;

	counter = 0;
	while (counter < size / 2)
	{
		temp_val = tab[counter];
		tab[counter] = tab[size - 1 - counter];
		tab[size - 1 - counter] = temp_val;
		counter++;
	}
}
