/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolmyko <dkolmyko@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 10:36:13 by dkolmyko          #+#    #+#             */
/*   Updated: 2024/08/30 10:20:30 by dkolmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if ('A' > str[counter] || str[counter] > 'Z')
		{
			return (0);
		}
		counter++;
	}
	return (1);
}

// int main(void)
// {
// 	char src[20] = "ASD";

// 	printf("%d\n", ft_str_is_uppercase(src));
// }
