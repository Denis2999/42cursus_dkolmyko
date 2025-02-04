/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolmyko <dkolmyko@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 12:27:17 by dkolmyko          #+#    #+#             */
/*   Updated: 2024/09/07 12:23:15 by dkolmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	factorial;

	i = 1;
	factorial = 1;
	while (i <= nb)
	{
		factorial *= i;
		i++;
	}
	return (factorial);
}

// #include <stdio.h>

// int main(void)
// {
// 	printf("%d\n", ft_iterative_factorial(3));

// 	return 0;
// }
