#include "variadic_functions.h"

/**
 * print_strings - fnction to print out strings
 * @separator: A xter to separate strings printed
 * @n: number of  parameters passed
 * @...: unspecified number of numbers to be passed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int count = 0;
	char *string
	va_list arguments;

	va_start(valist, n);

	for (count = 0; count < n; count++)
	{
		string = va_arg(valist, char *);

		if (string)
			printf("%s", string);
		else
			printf("(nil)");

		if (count < n - 1)
			if (separator)
				printf("%s", separator);
	}

	printf("\n");
	va_end(valist);
}

