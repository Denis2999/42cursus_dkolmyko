/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolmyko <dkolmyko@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 17:12:10 by dkolmyko          #+#    #+#             */
/*   Updated: 2024/09/04 19:18:28 by dkolmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

int	is_valid_base(char *base)
{
	int	base_len;
	int	i;
	int	j;

	base_len = ft_strlen(base);
	if (base_len < 2)
		return (0);
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
		{
			return (0);
		}
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	convert_to_base(int nbr, char *base, char *result)
{
	int	base_len;
	int	i;
	int	modulo;

	base_len = ft_strlen(base);
	i = 0;
	while (nbr != 0)
	{
		modulo = nbr % base_len;
		result[i] = base[modulo];
		nbr /= base_len;
		i++;
	}
	if (i == 0)
	{
		result[i++] = base[0];
	}
	result[i] = '\0';
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_len;
	int		i;
	int		modulo;
	char	result[32];

	i = 0;
	base_len = ft_strlen(base);
	if (!is_valid_base(base))
	{
		return ;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	convert_to_base(nbr, base, result);
	while (--i >= 0)
	{
		write(1, &result[i], 1);
	}
	write(1, "\n", 1);
}

// int main()
// {
// 	// int number = 7905690;
// 	int number = 42;

// 	ft_putnbr_base(number, "0123456789");
// 	ft_putnbr_base(number, "01");
// 	ft_putnbr_base(number, "0123456789ABCDEF");
// 	ft_putnbr_base(number, "poneyvif");
// }
