#include "variadic_functions.h"
/**
 * print_char - finction to output character values
 * @args: list of arguments to be passed
 */

void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - function to print integer values
 * @args: list of arguments to be passed
 */

void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - function to print float values
 * @args: list of arguments to be passed
 */

void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - function to print string values
 * @args: list of arguments to be passed
 */

void print_string(va_list args)
{
	char *s = va_arg(args, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * print_all - function to output all items
 * @format: list of types of arguments to be printed
 */

void print_all(const char * const format, ...)
{
	va_list arguments;
	int i, j;
	char *s1 = "";
	char *s2 = ", ";

	op_t ops[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	va_start(arguments, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (ops[j].c != '\0')
		{
			if (ops[j].c == format[i])
			{
				printf("%s", s1);
				ops[j].f(arguments);
				s1 = s2;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(arguments);
}
