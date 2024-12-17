/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolmyko <dkolmyko@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 13:58:28 by dkolmyko          #+#    #+#             */
/*   Updated: 2024/12/17 11:55:30 by dkolmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	size_t i;
	size_t j;
	char *str;

	str = 0;
	if (s1 != 0 && set != 0)
	{
		i = 0;
		j = ft_strlen(s1);
		while (s1[i] && ft_strchr(set, s1[i]))
			i++;
		while (s1[j - 1] && ft_strchr(set, s1[j - 1]) && j > i)
			j--;
		str = (char *)malloc(sizeof(char) * (j - i + 1));
		if (str)
			ft_strlcpy(str, &s1[i], j - i + 1);
	}
	return (str);
}

// Test main
// int main()
// {
// 	char *str1 = "   Hello, World!   ";
// 	char *set = " ";
// 	char *result;

// 	result = ft_strtrim(str1, set);
// 	if (result)
// 	{
// 		printf("Original: '%s'\n", str1);
// 		printf("Trimmed: '%s'\n", result);
// 		free(result); // Free allocated memory
// 	}
// 	else
// 	{
// 		printf("Error: ft_strtrim returned NULL.\n");
// 	}

// 	return 0;
// }
