/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolmyko <dkolmyko@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 12:07:30 by dkolmyko          #+#    #+#             */
/*   Updated: 2024/12/17 11:45:42 by dkolmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *restrict src, size_t dsize)
{
	size_t i;
	size_t len;

	i = 0;
	len = ft_strlen(dst);
	if (dsize == 0)
		return ft_strlen(src);

	while (src[i] != '\0' && (len + i + 1) < dsize)
	{
		dst[len + i] = src[i];
		i++;
	}
	if (len + i < dsize)
	{
		dst[len + i] = '\0';
	}

	return (ft_strlen(src) + len);
}

// int main()
// {
// 	char dst[20] = "Hello, ";
// 	const char *src = "World!";
// 	// size_t result = strlcat(dst, src, 0);
// 	size_t result = ft_strlcat(dst, src, 0);

// 	printf("Buffer: %s\n", dst);		   // Outputs "Hello, World!"
// 	printf("Total length: %zu\n", result); // Outputs total length of combined strings
// 	return 0;
// }
