/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolmyko <dkolmyko@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 15:05:44 by dkolmyko          #+#    #+#             */
/*   Updated: 2024/12/19 17:11:44 by dkolmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (str[i] - '0') + (result * 10);
		i++;
	}
	return (result * sign);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <limits.h>

// // Replace this with your implementation
// int	ft_atoi(const char *str);

// int main(void)
// {
// 	printf("Test 1: '42' -> %d (Expected: 42)\n", \
// 	       ft_atoi("42"));
// 	printf("Test 2: '   -42' -> %d (Expected: -42)\n", \
// 	       ft_atoi("   -42"));
// 	printf("Test 3: '4193 with words' -> %d (Expected: 4193)\n", \
// 	       ft_atoi("4193 with words"));
// 	printf("Test 4: 'words and 987' -> %d (Expected: 0)\n", \
// 	       ft_atoi("words and 987"));
// 	printf("Test 5: '-91283472332' -> %d (Expected: %d)\n", \
// 	       ft_atoi("-91283472332"), INT_MIN);
// 	printf("Test 6: '91283472332' -> %d (Expected: %d)\n", \
// 	       ft_atoi("91283472332"), INT_MAX);
// 	printf("Test 7: '2147483647' -> %d (Expected: 2147483647)\n", \
// 	       ft_atoi("2147483647"));
// 	printf("Test 8: '-2147483648' -> %d (Expected: -2147483648)\n", \
// 	       ft_atoi("-2147483648"));
// 	printf("Test 9: '--42' -> %d (Expected: 0)\n", \
// 	       ft_atoi("--42"));
// 	printf("Test 10: '+-42' -> %d (Expected: 0)\n", \
// 	       ft_atoi("+-42"));
// 	printf("Test 11: '0' -> %d (Expected: 0)\n", \
// 	       ft_atoi("0"));

// 	return (0);
// }
