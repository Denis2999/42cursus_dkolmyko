/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolmyko <dkolmyko@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 12:22:11 by dkolmyko          #+#    #+#             */
/*   Updated: 2024/09/07 12:26:36 by dkolmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb == 0 || nb == 1)
	{
		return (0);
	}
	while (i <= nb)
	{
		if (!(nb % i))
		{
			if (i != nb)
			{
				return (0);
			}
		}
		i++;
	}
	return (1);
}

// #include <stdio.h>
// #include <math.h>

// int main(void)
// {
// 	printf("ft_is_prime(0) returns: %d\n", ft_is_prime(0));
// 	printf("ft_is_prime(1) returns: %d\n", ft_is_prime(1));
// 	printf("ft_is_prime(2) returns: %d\n", ft_is_prime(2));
// 	printf("ft_is_prime(3) returns: %d\n", ft_is_prime(3));
// 	printf("ft_is_prime(4) returns: %d\n", ft_is_prime(4));
// 	printf("ft_is_prime(5) returns: %d\n", ft_is_prime(5));
// 	printf("ft_is_prime(6) returns: %d\n", ft_is_prime(6));
// 	printf("ft_is_prime(7) returns: %d\n", ft_is_prime(7));

// 	return 0;
// }
