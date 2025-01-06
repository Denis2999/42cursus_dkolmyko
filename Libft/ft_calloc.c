/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolmyko <dkolmyko@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 16:39:14 by dkolmyko          #+#    #+#             */
/*   Updated: 2025/01/06 10:52:18 by dkolmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static void ft_bzero(void *s, size_t n)
// {
// 	size_t i = 0;
// 	unsigned char *ptr = (unsigned char *)s;

// 	while (i < n)
// 	{
// 		ptr[i] = '\0';
// 		i++;
// 	}
// }

void	*ft_calloc(size_t count, size_t size)
{
	size_t	b;
	void	*p;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	b = count * size;
	p = malloc(b);
	if (p == NULL)
		return (NULL);
	else
		ft_bzero(p, b);
	return (p);
}

// if (size != 0 && count > SIZE_MAX / size)
//     return (NULL);
//
// int main() {
//     size_t num_elements = 5;
//     size_t element_size = sizeof(int);

//     // Test 1: Allocate memory for an array of integers
//     int *arr = (int *)ft_calloc(num_elements, element_size);
//     if (!arr) {
//         printf("Test 1 Failed: Memory allocation failed\n");
//         return 1;
//     }
//     printf("Test 1 Passed: Memory allocated successfully\n");

//     // Check if all elements are zero
//     int is_zeroed = 1;
//     for (size_t i = 0; i < num_elements; i++) {
//         if (arr[i] != 0) {
//             is_zeroed = 0;
//             break;
//         }
//     }
//     printf("Test 2 %s: Mmry in-zed to zero\n", is_zeroed ? "Pass" : "Fail");
//     free(arr);

//     // Test 3: Edge case, zero elements
//     void *ptr = ft_calloc(0, element_size);
//     if (ptr == NULL)
//         printf("Test 3 Passed: Returned NULL for zero elements\n");
//     else {
//         printf("Test 3 Failed: Did not return NULL for zero elements\n");
//         free(ptr);
//     }

//     // Test 4: Edge case, zero size
//     ptr = ft_calloc(num_elements, 0);
//     if (ptr == NULL)
//         printf("Test 4 Passed: Returned NULL for zero size\n");
//     else {
//         printf("Test 4 Failed: Did not return NULL for zero size\n");
//         free(ptr);
//     }

//     // Test 5: Large allocation
//     size_t large_count = 1000000;
//     ptr = ft_calloc(large_count, sizeof(char));
//     if (ptr) {
//         printf("Test 5 Passed: Large allocation successful\n");
//         free(ptr);
//     } else {
//         printf("Test 5 Failed: Large allocation failed\n");
//     }

//     return 0;
// }
