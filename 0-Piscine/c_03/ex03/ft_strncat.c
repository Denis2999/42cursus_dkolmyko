/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolmyko <dkolmyko@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 11:03:29 by dkolmyko          #+#    #+#             */
/*   Updated: 2024/09/03 13:11:18 by dkolmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	len_dest;
	unsigned int	i;
	char			*d;

	d = dest;
	len_dest = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0' && i < nb)
	{
		dest[len_dest] = src[i];
		i++;
		len_dest++;
	}
	dest[len_dest] = '\0';
	return (d);
}

// void run_test(char *dest, char *src, unsigned int n, int dest_size)
// {
// 	char original_dest[dest_size];
// 	strcpy(original_dest, dest);

// 	// Backup for comparison with original strncat
// 	char expected[dest_size];
// 	strcpy(expected, dest);

// 	// Call to the original strncat for comparison
// 	strncat(expected, src, n);

// 	// Call to your ft_strncat function
// 	ft_strncat(dest, src, n);

// 	printf("Original dest: \"%s\"\n", original_dest);
// 	printf("Source: \"%s\"\n", src);
// 	printf("n: %u\n", n);
// 	printf("Expected: \"%s\"\n", expected);
// 	printf("ft_strncat result: \"%s\"\n", dest);

// 	// Verify if the result matches the expected output
// 	if (strcmp(dest, expected) == 0)
// 		printf("Test passed!\n\n");
// 	else
// 		printf("Test failed!\n\n");
// }

// int main()
// {
// 	char buffer1[50] = "Hello";
// 	char buffer2[50] = "Hello";
// 	char buffer3[50] = "Hello";
// 	char buffer4[50] = "";
// 	char buffer5[50] = "Hello";
// 	char buffer6[50] = "123";

// 	// Test 1: Concatenating with n less than the length of src
// 	run_test(buffer1, ", World!", 5, 50);

// 	// Test 2: Concatenating with n greater than the length of src
// 	run_test(buffer2, ", World!", 20, 50);

// 	// Test 3: Concatenating an empty string
// 	run_test(buffer3, "", 5, 50);

// 	// Test 4: Concatenating to an empty string
// 	run_test(buffer4, "World", 3, 50);

// 	// Test 5: Concatenating with special characters and n limiting the concat
// 	run_test(buffer5, "!!!", 2, 50);

// 	// Test 6: Concatenating a numeric string with exact n
// 	run_test(buffer6, "456", 3, 50);

// 	return 0;
// }
