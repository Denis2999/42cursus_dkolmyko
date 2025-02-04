/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolmyko <dkolmyko@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 13:54:34 by dkolmyko          #+#    #+#             */
/*   Updated: 2024/09/03 12:42:47 by dkolmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	diff;

	i = 0;
	diff = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		diff = s1[i] - s2[i];
		if (diff != 0)
		{
			return (diff);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

// void run_test(char *str1, char *str2)
// {
// 	printf("Comparing \"%s\" and \"%s\":\n", str1, str2);
// 	printf("strcmp(str1, str2) = %d\n", strcmp(str1, str2));
// 	printf("ft_strcmp(str1, str2) = %d\n", ft_strcmp(str1, str2));
// 	printf("\n");
// }

// int main()
// {
// 	// Test cases
// 	run_test("hello", "hello"); // Identical strings
// 	run_test("Hello", "hello"); // Different case
// 	run_test("abc", "abcd");	// Shorter string first
// 	run_test("abcd", "abc");	// Longer string first
// 	run_test("abc$", "abc@");	// Special characters
// 	run_test("", "abc");		// One empty string
// 	run_test("", "");			// Both strings empty
// 	run_test("123", "124");		// Strings with numbers

// 	return 0;
// }