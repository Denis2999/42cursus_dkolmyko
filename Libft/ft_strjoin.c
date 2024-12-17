/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolmyko <dkolmyko@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 13:46:16 by dkolmyko          #+#    #+#             */
/*   Updated: 2024/12/16 13:55:16 by dkolmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_strlen(const char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

char *ft_strjoin(char const *s1, char const *s2)
{
	int i;
	int j;
	char *str;

	i = 0;
	j = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (str == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}

// int main()
// {
//     char *s1 = "Hello";
//     char *s2 = " World!";
//     char *result;

//     result = ft_strjoin(s1, s2);

//     if (result != NULL)
//     {
//         printf("Result: %s\n", result);
//         free(result); // Free the allocated memory after use
//     }
//     else
//     {
//         printf("Memory allocation failed.\n");
//     }

//     return 0;
// }
