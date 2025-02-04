/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolmyko <dkolmyko@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:18:05 by dkolmyko          #+#    #+#             */
/*   Updated: 2024/09/12 12:22:28 by dkolmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

// Define the boolean type
typedef int	t_bool;

// Define TRUE and FALSE
# define TRUE 1
# define FALSE 0

// Define SUCCESS as the return value for main
# define SUCCESS 0

// Define the EVEN macro to check if a number is even
# define EVEN(nbr) (nbr % 2 == 0)

// Define message strings
# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"

#endif
