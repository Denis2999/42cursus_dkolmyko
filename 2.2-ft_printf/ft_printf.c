/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolmyko <dkolmyko@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 20:28:30 by dkolmyko          #+#    #+#             */
/*   Updated: 2025/02/20 10:53:10 by dkolmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_conversion(const char *character, va_list arguments)
{
	int		attachment_lenght;
	char	one_char;

	attachment_lenght = 0;
	if (*character == 'c')
	{
		one_char = (char)va_arg(arguments, int);
		attachment_lenght += display_character(one_char);
	}
	else if (*character == 's')
		attachment_lenght += display_string(va_arg(arguments, char *));
	else if (*character == 'p')
		attachment_lenght += display_pointer(va_arg(arguments, uintptr_t));
	else if (*character == 'd' || *character == 'i')
		attachment_lenght += display_integer(va_arg(arguments, int));
	else if (*character == 'u')
		attachment_lenght += display_unsigned_integer(
				va_arg(arguments, unsigned int));
	else if (*character == 'x' || *character == 'X')
		attachment_lenght += display_hexadecimal(
				(unsigned)va_arg(arguments, unsigned int), *character);
	else if (*character == '%')
		attachment_lenght += display_character('%');
	return (attachment_lenght);
}

int	ft_printf(const char *sentence, ...)
{
	int		i;
	int		length;
	va_list	arguments;

	i = 0;
	length = 0;
	va_start(arguments, sentence);
	while (sentence[i])
	{
		if (sentence[i] == '%')
		{
			length += check_conversion(&sentence[++i], arguments);
			if (length < 0)
				return (-1);
		}
		else
		{
			length += display_character(sentence[i]);
			if (length < 0)
				return (-1);
		}
		i++;
	}
	va_end(arguments);
	return (length);
}

// int main()
// {
// 	int ft_count, std_count;
// 	void *ptr = (void *)0x12345678; // Example pointer

// 	// Test case 1: Character
// 	ft_count = ft_printf("Character: %c\n", 'A');
// 	std_count = printf("Character: %c\n", 'A');
// 	printf("ft_printf count: %d, printf count: %d\n", ft_count, std_count);

// 	// Test case 2: String
// 	ft_count = ft_printf("String: %s\n", "Hello, world!");
// 	std_count = printf("String: %s\n", "Hello, world!");
// 	printf("ft_printf count: %d, printf count: %d\n", ft_count, std_count);

// 	// Test case 3: Integer (d and i)
// 	ft_count = ft_printf("Integer (d): %d\n", 12345);
// 	std_count = printf("Integer (d): %d\n", 12345);
// 	printf("ft_printf count: %d, printf count: %d\n", ft_count, std_count);

// 	ft_count = ft_printf("Integer (i): %i\n", -9876);
// 	std_count = printf("Integer (i): %i\n", -9876);
// 	printf("ft_printf count: %d, printf count: %d\n", ft_count, std_count);

// 	ft_count = ft_printf("Integer (d): %d\n", 0);
// 	std_count = printf("Integer (d): %d\n", 0);
// 	printf("ft_printf count: %d, printf count: %d\n", ft_count, std_count);

// 	ft_count = ft_printf("Integer (d): %d\n", INT_MIN);
// 	std_count = printf("Integer (d): %d\n", INT_MIN);
// 	printf("ft_printf count: %d, printf count: %d\n", ft_count, std_count);

// 	// Test case 4: Percent
// 	ft_count = ft_printf("Percent: %%\n");
// 	std_count = printf("Percent: %%\n");
// 	printf("ft_printf count: %d, printf count: %d\n", ft_count, std_count);

// 	// Test case 5: Mixed format string
// 	ft_count = ft_printf("Mixed: %s %c %d %%\n", "Test", 'Z', -54321);
// 	std_count = printf("Mixed: %s %c %d %%\n", "Test", 'Z', -54321);
// 	printf("ft_printf count: %d, printf count: %d\n", ft_count, std_count);

// 	// Test case 6: Multiple arguments
// 	ft_count = ft_printf("%d %s %c %d\n", 100, "Hello", 'Q', 200);
// 	std_count = printf("%d %s %c %d\n", 100, "Hello", 'Q', 200);
// 	printf("ft_printf count: %d, printf count: %d\n", ft_count, std_count);

// 	// ... (Previous test cases for c, s, d, i, %)

// 	// Test case 6: Pointer (p)
// 	ft_count = ft_printf("Pointer: %p\n", ptr);
// 	std_count = printf("Pointer: %p\n", ptr);
// 	printf("ft_printf count: %d, printf count: %d\n", ft_count, std_count);

// 	// Test case 7: Unsigned Integer (u)
// 	unsigned int uint_val = 987654321;
// 	ft_count = ft_printf("Unsigned: %u\n", uint_val);
// 	std_count = printf("Unsigned: %u\n", uint_val);
// 	printf("ft_printf count: %d, printf count: %d\n", ft_count, std_count);

// 	// Test case 8: Hexadecimal (x and X)
// 	unsigned int hex_val = 0xABCDEF12;
// 	ft_count = ft_printf("Hexadecimal (x): %x\n", hex_val);
// 	std_count = printf("Hexadecimal (x): %x\n", hex_val);
// 	printf("ft_printf count: %d, printf count: %d\n", ft_count, std_count);

// 	ft_count = ft_printf("Hexadecimal (X): %X\n", hex_val);
// 	std_count = printf("Hexadecimal (X): %X\n", hex_val);
// 	printf("ft_printf count: %d, printf count: %d\n", ft_count, std_count);

// 	// Test case 10: NULL pointer
// 	ptr = NULL;
// 	ft_count = ft_printf("NULL Pointer: %p\n", ptr);
// 	std_count = printf("NULL Pointer: %p\n", ptr);
// 	printf("ft_printf count: %d, printf count: %d\n", ft_count, std_count);

// 	// Test case 11: String
// 	ft_count = ft_printf(" NULL %s NULL ", NULL);
// 	// std_count = printf(" NULL %s NULL ", (char *)NULL);
// 	printf("ft_printf count: %d, printf count: %d\n", ft_count, std_count);

// 	return 0;
// }
