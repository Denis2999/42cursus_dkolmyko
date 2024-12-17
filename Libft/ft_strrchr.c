/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolmyko <dkolmyko@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 15:16:21 by dkolmyko          #+#    #+#             */
/*   Updated: 2024/12/17 11:54:52 by dkolmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	int i = ft_strlen(s);

	if (c == '\0')
	{
		return ((char *)&s[i]);
	}

	while (i >= 0)
	{
		if (s[i] == c)
		{
			return ((char *)&s[i]);
		}
		i--;
	}
	return (NULL);
}

// int main()
// {
// 	const char *str = "Hello, world!";
// 	char c = 'o';

// 	char *result = ft_strrchr(str, c);
// 	if (result)
// 	{
// 		printf("Found '%c' at position: %ld\n", c, result - str);
// 	}
// 	else
// 	{
// 		printf("Character '%c' not found.\n", c);
// 	}

// 	result = ft_strrchr(str, 'z');
// 	if (result)
// 	{
// 		printf("Found '%c' at position: %ld\n", 'z', result - str);
// 	}
// 	else
// 	{
// 		printf("Character 'z' not found.\n");
// 	}

// 	return 0;
// }
