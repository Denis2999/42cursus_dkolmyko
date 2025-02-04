/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolmyko <dkolmyko@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 10:36:13 by dkolmyko          #+#    #+#             */
/*   Updated: 2024/08/29 12:35:33 by dkolmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alphanumeric(char c)
{
	return (('A' <= c && c <= 'Z')
		|| ('a' <= c && c <= 'z') || ('0' <= c && c <= '9'));
}

char	to_uppercase(char c)
{
	if ('a' <= c && c <= 'z')
		return (c - 32);
	return (c);
}

char	to_lowercase(char c)
{
	if ('A' <= c && c <= 'Z')
		return (c + 32);
	return (c);
}

void	capitalize_word(char *str, int *counter, int *is_new_word)
{
	if (*is_new_word)
	{
		str[*counter] = to_uppercase(str[*counter]);
		*is_new_word = 0;
	}
	else
	{
		str[*counter] = to_lowercase(str[*counter]);
	}
}

char	*ft_strcapitalize(char *str)
{
	int	counter;
	int	is_new_word;

	counter = 0;
	is_new_word = 1;
	while (str[counter] != '\0')
	{
		if (is_alphanumeric(str[counter]))
		{
			capitalize_word(str, &counter, &is_new_word);
		}
		else
		{
			is_new_word = 1;
		}
		counter++;
	}
	return (str);
}
