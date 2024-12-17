/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolmyko <dkolmyko@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 16:07:05 by dkolmyko          #+#    #+#             */
/*   Updated: 2024/12/17 16:09:54 by dkolmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*str;

	str = "Hello, World!";
	printf("Length: %zu\n", ft_strlen(str));
	return (0);
}
