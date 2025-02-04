/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolmyko <dkolmyko@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 12:20:13 by dkolmyko          #+#    #+#             */
/*   Updated: 2024/12/17 11:38:45 by dkolmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*p;

	p = (char *)b;
	while (len > 0)
	{
		p[len - 1] = c;
		len--;
	}
	return (b);
}

// int main()
// {
// 	char test1[50] = "Hello, world!";
// 	char test2[50] = "Hello, world!";

// 	printf("Original string: %s\n", test1);

// 	// Test ft_memset
// 	ft_memset(test1, '*', 5);
// 	printf("After ft_memset: %s\n", test1);

// 	// Test the real memset for comparison
// 	memset(test2, '*', 5);
// 	printf("After memset:    %s\n", test2);

// 	// Verify results match
// 	if (strcmp(test1, test2) == 0)
// 		printf("ft_memset works correctly!\n");
// 	else
// 		printf("There is an issue with ft_memset.\n");

// 	return 0;
// }
