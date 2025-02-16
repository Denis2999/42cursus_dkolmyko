#include "ft_printf.h"

int display(char *attachment)
{
	int i = 0;

	if (attachment)
	{
		while (attachment[i] != '\0')
		{
			write(1, &attachment[i], 1);
			i++;
		}
	}

	return (i);
}

// int handle_c(va_list arguments)
// {
// 	char character = (char)va_arg(arguments, int);
// 	return (display(&character));
// }

int handle_u(va_list arguments)
{
	// char *buffer = NULL;
	// int i = 0;
	// int is_negative = 0;
	// unsigned int num = va_arg(arguments, u_int);
	// unsigned int temp_num =
}

int check_conversion(const char *character, va_list arguments)
{
	int attachment_lenght = 0;

	if (*character == 'c')
	{
		char character = (char)va_arg(arguments, int);
		attachment_lenght = display(&character);
	}
	else if (*character == 's')
	{
		attachment_lenght = display(va_arg(arguments, char *));
	}
	else if (*character == 'p')
	{
		;
	}
	else if (*character == 'd')
	{
		attachment_lenght = display(ft_itoa(va_arg(arguments, int)));
		// printf("%d\n", attachment_lenght);
	}
	else if (*character == 'i')
	{
		;
	}
	else if (*character == 'u')
	{
		// attachment_lenght = handle_unsigned_decimal(arguments);
		;
	}
	else if (*character == 'x')
	{
		;
	}
	else if (*character == 'X')
	{
		;
	}
	else if (*character == '%')
	{
		write(1, "%", 1);
		attachment_lenght++;
	}

	return (attachment_lenght);
}
