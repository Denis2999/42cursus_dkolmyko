/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolmyko <dkolmyko@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 14:32:45 by dkolmyko          #+#    #+#             */
/*   Updated: 2024/12/17 16:08:08 by dkolmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	if (c == '\0')
	{
		return ((char *)&s[i]);
	}
	return (NULL);
}

// int main()
// {
// 	const char *str = "Hello, World!";
// 	char *result = ft_strchr(str, 'W');

// 	if (result)
// 		printf("Found: %s\n", result); // Output: Found: World!
// 	else
// 		printf("Not found\n");

// 	return 0;
// }
