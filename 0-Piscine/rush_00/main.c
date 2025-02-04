/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkurowsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 19:26:34 by mkurowsk          #+#    #+#             */
/*   Updated: 2024/08/25 18:37:49 by mkurowsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <ctype.h>

void	rush(int x, int y);

int	main(int argc, char **argv)
{
	int	x;
	int	y;

	if (argc != 3)
	{
		write (1, "Please input two positive integers\n", 36);
		return (1);
	}
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	if (x <= 0 || y <= 0)
	{
		write(1, "Please input two positive integers\n", 36);
		return (1);
	}
	rush (x, y);
	return (0);
}
