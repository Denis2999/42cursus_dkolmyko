/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolmyko <dkolmyko@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 16:03:06 by dkolmyko          #+#    #+#             */
/*   Updated: 2024/12/17 11:37:39 by dkolmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		if ((unsigned char)str[i] == (unsigned char)c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}

// int main()
// {
// 	char str[] = "Hello, world!";
// 	char *result = memchr(str, 'w', sizeof(str));

// 	if (result != NULL)
// 	{
// 		printf("Found 'w' at position: %ld\n", result - str);
// 	}
// 	else
// 	{
// 		printf("'w' not found\n");
// 	}

// 	return 0;
// }
