/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolmyko <dkolmyko@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 13:02:59 by dkolmyko          #+#    #+#             */
/*   Updated: 2024/09/12 13:12:45 by dkolmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

int	result_size(int size, char **strs, char *sep)
{
	int	i;
	int	result_size;

	i = 0;
	result_size = 0;
	while (i < size)
	{
		result_size += ft_strlen(strs[i]);
		if (i != size - 1)
		{
			result_size += ft_strlen(sep);
		}
		i++;
	}
	return (result_size);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*output;
	int		i;
	int		j;
	int		a;

	i = 0;
	a = 0;
	output = (char *)malloc((result_size(size, strs, sep) + 1) * sizeof(char));
	if (!output)
		return (NULL);
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != 0)
			output[a++] = strs[i][j++];
		if (i != size - 1)
		{
			j = 0;
			while (sep[j] != 0)
				output[a++] = sep[j++];
		}
		i++;
	}
	output[a] = 0;
	return (output);
}

// #include <stdio.h>

// int main()
// {
// 	char *strs[] = {"Hello", "World", "Do", "you", "remember?"};
// 	char *sep = " .. ";
// 	char *str = ft_strjoin(5, strs, sep);
// 	if (str)
// 	{
// 		printf("%s\n", str);
// 		free(str); // Don't forget to free the allocated memory
// 	}
// 	else
// 	{
// 		printf("Memory allocation failed\n");
// 	}
// 	return 0;
// }
