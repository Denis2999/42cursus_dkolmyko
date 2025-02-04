/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolmyko <dkolmyko@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 10:06:33 by dkolmyko          #+#    #+#             */
/*   Updated: 2024/09/03 15:33:22 by dkolmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char	*ft_strcat(char *dest, char *src)
{
	int	len_dest;
	int	i;

	len_dest = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[len_dest] = src[i];
		i++;
		len_dest++;
	}
	dest[len_dest] = '\0';
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// void run_test(char *dest, char *src, int dest_size)
// {
// 	char original_dest[dest_size];
// 	strcpy(original_dest, dest);

// 	// Backup for comparison with original strcat
// 	char expected[dest_size];
// 	strcpy(expected, dest);

// 	// Call to the original strcat for comparison
// 	strcat(expected, src);

// 	// Call to your ft_strcat function
// 	ft_strcat(dest, src);

// 	printf("Original dest: \"%s\"\n", original_dest);
// 	printf("Source: \"%s\"\n", src);
// 	printf("Expected: \"%s\"\n", expected);
// 	printf("ft_strcat result: \"%s\"\n", dest);

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

// 	// Test 1: Concatenating a regular string
// 	run_test(buffer1, ", World!", 50);

// 	// Test 2: Concatenating an empty string
// 	run_test(buffer2, "", 50);

// 	// Test 3: Concatenating to an empty string
// 	run_test(buffer3, "World", 50);

// 	// Test 4: Concatenating two empty strings
// 	run_test(buffer4, "", 50);

// 	// Test 5: Concatenating with special characters
// 	run_test(buffer5, "!!!", 50);

// 	// Test 6: Concatenating a numeric string
// 	run_test(buffer6, "456", 50);

// 	return 0;
// }
