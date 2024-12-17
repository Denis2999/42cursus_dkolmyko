/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolmyko <dkolmyko@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 16:30:03 by dkolmyko          #+#    #+#             */
/*   Updated: 2024/12/17 11:54:31 by dkolmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (needle == NULL || needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < n)
	{
		if (haystack[i] == needle[j])
		{
			while (haystack[i + j] == needle[j] && i + j < n)
			{
				if (needle[j + 1] == '\0')
					return ((char *)haystack + i);
				j++;
			}
			j = 0;
		}
		i++;
	}
	return (NULL);
}

// int main()
// {
// 	char str[] = "Hello, World!";
// 	char sub[] = "World";

// 	char *result = strnstr(str, sub, 10); // Search within the first 10 characters.
// 	if (result)
// 		printf("Found: %s\n", result);
// 	else
// 		printf("Not found\n");

// 	return 0;
// }
