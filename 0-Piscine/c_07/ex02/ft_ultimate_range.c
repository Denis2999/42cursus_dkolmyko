/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolmyko <dkolmyko@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 12:18:45 by dkolmyko          #+#    #+#             */
/*   Updated: 2024/09/10 12:21:29 by dkolmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	*range = (int *)malloc(size * sizeof(int));
	if (*range == NULL)
	{
		return (-1);
	}
	i = 0;
	while (i < size)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (size);
}

// #include <stdio.h>

// int main()
// {
// 	int *arr = NULL;
// 	int min = -20;
// 	int max = 20;
// 	int x = ft_ultimate_range(&arr, min, max);

// 	printf("%d\n", x);
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
