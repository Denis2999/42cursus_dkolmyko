/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolmyko <dkolmyko@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 12:18:41 by dkolmyko          #+#    #+#             */
/*   Updated: 2024/09/10 12:20:49 by dkolmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*arr;
	int	i;

	i = 0;
	if (min >= max)
	{
		return (NULL);
	}
	size = max - min;
	arr = (int *)malloc(size * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}

// int main()
// {
// 	// int min = -2147483648;
// 	int min = -20;
// 	int max = 20;
// 	int *arr = ft_range(min, max);

// 	if (arr != NULL)
// 	{
// 		for (int i = 0; i < max - min; i++)
// 		{
// 			printf("%d, ", arr[i]);
// 		}
// 		free(arr);
// 	}
// 	else
// 	{
// 		printf("Memory allocation failed.\n");
// 	}

// 	return 0;
// }
