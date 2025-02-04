/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolmyko <dkolmyko@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 12:22:15 by dkolmyko          #+#    #+#             */
/*   Updated: 2024/09/07 12:35:49 by dkolmyko         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	while (!(ft_is_prime(nb)))
	{
		nb++;
	}
	return (nb);
}

// #include <stdio.h>

// int main(void)
// {
// 	printf("ft_find_next_prime(0) returns: %d\n", ft_find_next_prime(0));
// 	printf("ft_find_next_prime(1) returns: %d\n", ft_find_next_prime(1));
// 	printf("ft_find_next_prime(2) returns: %d\n", ft_find_next_prime(2));
// 	printf("ft_find_next_prime(3) returns: %d\n", ft_find_next_prime(3));
// 	printf("ft_find_next_prime(4) returns: %d\n", ft_find_next_prime(4));
// 	printf("ft_find_next_prime(5) returns: %d\n", ft_find_next_prime(5));
// 	printf("ft_find_next_prime(6) returns: %d\n", ft_find_next_prime(6));
// 	printf("ft_find_next_prime(7) returns: %d\n", ft_find_next_prime(7));

// 	return 0;
// }
