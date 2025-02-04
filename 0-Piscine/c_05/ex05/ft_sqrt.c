/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolmyko <dkolmyko@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 12:22:06 by dkolmyko          #+#    #+#             */
/*   Updated: 2024/09/07 12:34:22 by dkolmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	result;
	int	i;

	result = 1;
	i = 1;
	while (result <= nb)
	{
		i++;
		result = i * i;
	}
	if ((i - 1) * (i - 1) != nb)
	{
		return (0);
	}
	return (i - 1);
}

// #include <stdio.h>
// #include <math.h>

// int main(void)
// {
// 	printf("%d\n", ft_sqrt(0));
// 	printf("%d\n", ft_sqrt(4));
// 	// printf("%f\n", sqrt(9));

// 	return 0;
// }