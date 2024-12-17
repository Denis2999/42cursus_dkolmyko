/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolmyko <dkolmyko@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 11:23:56 by dkolmyko          #+#    #+#             */
/*   Updated: 2024/12/17 12:16:50 by dkolmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t i;
	size_t j;
	char *str;

	str = (char *)malloc(sizeof(*s) * (len + 1));
	if (str == 0)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = 0;
	return (str);
}

// int main(void)
// {
// 	char *str;
// 	char *result;

// 	// Test 1: Regular substring
// 	str = "Hello, world!";
// 	result = ft_substr(str, 7, 5);
// 	if (result)
// 	{
// 		printf("Test 1: Substring is '%s'\n", result);
// 		free(result);
// 	}
// 	else
// 	{
// 		printf("Test 1 Failed: NULL returned\n");
// 	}

// 	// Test 2: Start beyond string length
// 	str = "Short";
// 	result = ft_substr(str, 10, 5);
// 	if (result && result[0] == '\0')
// 	{
// 		printf("Test 2 Passed: Substring is an empty string\n");
// 		free(result);
// 	}
// 	else
// 	{
// 		printf("Test 2 Failed\n");
// 	}

// 	// Test 3: Length exceeds string size
// 	str = "42 Network";
// 	result = ft_substr(str, 3, 20);
// 	if (result)
// 	{
// 		printf("Test 3: Substring is '%s'\n", result);
// 		free(result);
// 	}
// 	else
// 	{
// 		printf("Test 3 Failed: NULL returned\n");
// 	}

// 	// Test 4: Empty string input
// 	str = "";
// 	result = ft_substr(str, 0, 5);
// 	if (result && result[0] == '\0')
// 	{
// 		printf("Test 4 Passed: Substring is an empty string\n");
// 		free(result);
// 	}
// 	else
// 	{
// 		printf("Test 4 Failed\n");
// 	}

// 	// Test 5: Zero length
// 	str = "Example";
// 	result = ft_substr(str, 3, 0);
// 	if (result && result[0] == '\0')
// 	{
// 		printf("Test 5 Passed: Substring is an empty string\n");
// 		free(result);
// 	}
// 	else
// 	{
// 		printf("Test 5 Failed\n");
// 	}

// 	return 0;
// }
