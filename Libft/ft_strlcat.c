/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolmyko <dkolmyko@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 12:07:30 by dkolmyko          #+#    #+#             */
/*   Updated: 2024/12/19 16:14:35 by dkolmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dsize <= dst_len)
		return (dsize + src_len);
	i = 0;
	while (src[i] != '\0' && (dst_len + i + 1) < dsize)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

// #include <stdio.h>
// #include <string.h>

// // Replace this with your implementation
// size_t	ft_strlcat(char *dst, const char *src, size_t dsize);

// int main(void)
// {
// 	char buffer[20];
// 	memset(buffer, 0, sizeof(buffer));
// 	strcpy(buffer, "Hello");

// 	// Test Case 1: Appending to `dst`
// 	printf("Return Value: %zu\n", ft_strlcat(buffer, " World", sizeof(buffer)));
//Exp:11
// 	printf("Resulting String: %s\n", buffer); // Expected: "Hello World"

// 	// Test Case 2: `dsize` smaller than `dst`
// 	strcpy(buffer, "Hello");
// 	printf("Return Value: %zu\n", ft_strlcat(buffer, " World", 5)); // Exp: 11
// 	printf("Resulting String: %s\n", buffer); // Expected: "Hello" (unchanged)

// 	// Test Case 3: `dsize` is 0
// 	printf("Return Value: %zu\n", ft_strlcat(buffer, " World", 0)); // Exp: 6
// 	printf("Resulting String: %s\n", buffer); // Expected: "Hello" (unchanged)

// 	return 0;
// }
