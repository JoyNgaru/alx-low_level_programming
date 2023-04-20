#include "variadic_functions.h"

/**
 * print_strings - fnction to print out strings
 * @separator: A xter to separate strings printed
 * @n: number of  parameters passed
 * @...: unspecified number of numbers to be passed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *string;
	unsigned int count;
	va_list arguments;

	va_start(arguments, n);
	if (separator == NULL)
		separator = "";
 
	do{
		string = va_arg(arguments, char*);
			printf("%s", string);
	while (count < n);
		if (separator && count < n - 1)
			printf("%s", separator);
		count++;
}
		if (string == NULL)
                        string = "(nil)";

	printf("\n");

	va_end(arguments);
}
