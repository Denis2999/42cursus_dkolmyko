/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolmyko <dkolmyko@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 09:24:53 by dkolmyko          #+#    #+#             */
/*   Updated: 2024/12/17 13:50:10 by dkolmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;
	int diff;

	i = 0;
	diff = 0;
	if (n == 0)
	{
		return (0);
	}
	while (i < n - 1 && s1[i] != '\0' && s2[i] != '\0')
	{
		diff = (unsigned char)s1[i] - (unsigned char)s2[i];
		if (diff != 0)
		{
			return (diff);
		}
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// void run_test(char *str1, char *str2, unsigned int n)
// {
// 	printf("Comparing \"%s\" and \"%s\" with n = %u:\n", str1, str2, n);
// 	printf("strncmp(str1, str2, n) = %d\n", strncmp(str1, str2, n));
// 	printf("ft_strncmp(str1, str2, n) = %d\n", ft_strncmp(str1, str2, n));
// 	printf("\n");
// }

// int main()
// {
// 	// Test cases
// 	run_test("hello", "hello", 3);
// 	run_test("hello", "heLlo", 2);
// 	run_test("abcde", "abcXY", 3);
// 	run_test("abc", "abcd", 4);
// 	run_test("abc", "abcd", 2);
// 	run_test("", "abc", 2);
// 	run_test("", "", 1);
// 	run_test("abc@", "abc$", 4);
// 	run_test("12345", "12340", 5);
// 	run_test("abcdefgh", "abcdefgh", 4);
// 	run_test("abc", "abcd", 10);
// 	run_test("abc", "abc\0def", 10);
// 	run_test("abcd", "abc", 10);
// 	run_test("abc\0xyz", "abc\0abc", 6);
// 	run_test("abcdefgh", "abcdEfgh", 5);

// 	return 0;
// }
