/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolmyko <dkolmyko@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 16:48:37 by dkolmyko          #+#    #+#             */
/*   Updated: 2024/09/07 12:34:52 by dkolmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
	{
		return (1);
	}
	else if (power < 0 || nb == 0)
	{
		return (0);
	}
	return (nb * ft_recursive_power(nb, power - 1));
}

// #include <stdio.h>

// int main(void)
// {
// 	printf("%d\n", ft_recursive_power(4, 2));

// 	return 0;
// }
