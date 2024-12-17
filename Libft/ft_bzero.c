/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolmyko <dkolmyko@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:11:11 by dkolmyko          #+#    #+#             */
/*   Updated: 2024/12/17 11:28:22 by dkolmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *s, size_t n)
{
	size_t i = 0;
	unsigned char *ptr = (unsigned char *)s;

	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
}

// // Function to print memory content as bytes
// void print_memory(const void *s, size_t n)
// {
// 	const unsigned char *ptr = s;
// 	for (size_t i = 0; i < n; i++)
// 	{
// 		printf("%02x ", ptr[i]);
// 	}
// 	printf("\n");
// }
	
// int main()
// {
// 	char buffer[10] = "ABCDEFGHI"; // Test buffer

// 	printf("Initial buffer:\n");
// 	print_memory(buffer, sizeof(buffer));

// 	// Test 1: Zero out the first 5 bytes
// 	ft_bzero(buffer, 5);
// 	printf("After ft_bzero(buffer, 5):\n");
// 	print_memory(buffer, sizeof(buffer));

// 	// Test 2: Zero out the entire buffer
// 	char buffer2[10] = "ABCDEFGHI";
// 	ft_bzero(buffer2, sizeof(buffer2));
// 	printf("After ft_bzero(buffer2, sizeof(buffer2)):\n");
// 	print_memory(buffer2, sizeof(buffer2));

// 	// Test 3: Zero out zero bytes (no-op)
// 	char buffer3[10] = "ABCDEFGHI";
// 	ft_bzero(buffer3, 0);
// 	printf("After ft_bzero(buffer3, 0):\n");
// 	print_memory(buffer3, sizeof(buffer3));

// 	// Test 4: Compare with standard bzero for correctness
// 	char buffer4[10] = "ABCDEFGHI";
// 	char buffer5[10] = "ABCDEFGHI";
// 	ft_bzero(buffer4, 5);
// 	bzero(buffer5, 5);
// 	printf("ft_bzero result:\n");
// 	print_memory(buffer4, sizeof(buffer4));
// 	printf("bzero result:\n");
// 	print_memory(buffer5, sizeof(buffer5));

// 	return 0;
// }
