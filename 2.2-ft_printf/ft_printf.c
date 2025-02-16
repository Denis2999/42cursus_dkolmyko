#include "ft_printf.h"

int ft_printf(const char *sentence, ...)
{
	int i = 0;
	int attachment_length = 0;
	va_list arguments;

	va_start(arguments, sentence);
	while (sentence[i])
	{
		if (sentence[i] == '%')
		{
			i++;
			attachment_length = check_conversion(&sentence[i], arguments);
			i++;
		}

		write(1, &sentence[i], 1);
		i++;
	}

	va_end(arguments);
	return (i + attachment_length);
}

int main()
{
	unsigned int num = 42;
	int count_1 = ft_printf("Hello, my name is %s and I'm %d years old.\n", "Laura", 23);
	// int count_2 = printf("Hello my name is %s and I'm %d years old\n", "Laura", 23);
	return 0;
}
