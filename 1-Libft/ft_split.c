/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolmyko <dkolmyko@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 14:14:56 by dkolmyko          #+#    #+#             */
/*   Updated: 2025/01/14 18:19:51 by dkolmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_freeup(char *strs)
{
	int	i;

	if (strs == NULL)
		return ;
	i = 0;
	while (strs[i] != '\0')
	{
		free(strs);
		i++;
	}
	free(strs);
}

static int	ft_wordcount(char *str, char separator)
{
	int	i;
	int	word_amount;

	i = 0;
	word_amount = 0;
	while (str[i] != '\0')
	{
		if (str[i] != separator)
		{
			word_amount++;
			while (str[i] != separator && str[i] != '\0')
				i++;
			if (str[i] == '\0')
				return (word_amount);
		}
		i++;
	}
	return (word_amount);
}

static void	ft_strcpy(char *word, char *str, char separator, int start_position)
{
	int	i;

	i = 0;
	while (str[start_position] != '\0' && str[start_position] == separator)
		start_position++;
	while (str[start_position + i] != \
		separator && str[start_position + i] != '\0')
	{
		word[i] = str[start_position + i];
		i++;
	}
	word[i] = '\0';
}

static char	*ft_stralloc(char *str, char separator, int *position)
{
	char	*word;
	int		start_position;

	start_position = *position;
	word = NULL;
	while (str[*position] != '\0')
	{
		if (str[*position] != separator)
		{
			while (str[*position] != '\0' && str[*position] != separator)
				*position += 1;
			word = (char *)malloc(sizeof(char) * (*position + 1));
			if (word == NULL)
				return (NULL);
			break ;
		}
		*position += 1;
	}
	ft_strcpy(word, str, separator, start_position);
	return (word);
}

char	**ft_split(char const *str, char separator)
{
	char	**word_arr;
	int		i;
	int		word_amount;
	int		position;

	if (str == NULL)
		return (NULL);
	i = 0;
	position = 0;
	word_amount = ft_wordcount((char *)str, separator);
	word_arr = (char **)malloc(sizeof(char *) * (word_amount + 1));
	if (word_arr == NULL)
		return (NULL);
	word_arr[word_amount] = NULL;
	while (i < word_amount)
	{
		word_arr[i] = ft_stralloc(((char *)str), separator, &position);
		if (word_arr[i] == NULL)
		{
			ft_freeup(word_arr[i]);
		}
		i++;
	}
	return (word_arr);
}

// int main() {
//     const char *str = "Hello, this is a test string!";
//     char delimiter = ' ';

//     // Calling ft_split
//     char **result = ft_split(str, delimiter);

//     // Print results
//     if (result != NULL) {
//         for (int i = 0; result[i] != NULL; i++) {
//             printf("Substring %d: %s\n", i, result[i]);
//             free(result[i]); // Free each substring
//         }
//         free(result); // Free the array of substrings
//     } else {
//         printf("Error: ft_split returned NULL\n");
//     }

//     return 0;
// }
