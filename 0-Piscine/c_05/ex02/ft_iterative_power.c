/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolmyko <dkolmyko@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 16:26:54 by dkolmyko          #+#    #+#             */
/*   Updated: 2024/09/07 12:32:38 by dkolmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = 1;
	result = 1;
	if (power < 0)
	{
		return (0);
	}
	else if (nb == 0 && power == 0)
	{
		return (1);
	}
	while (i <= power)
	{
		result *= nb;
		i++;
	}
	return (result);
}

// #include <stdio.h>

// int main(void)
// {
// 	printf("%d\n", ft_iterative_power(0, 0));

// 	return 0;
// }
