#include "main.h"
/**
 * print_to_98 - write natural numbers from 0 to 98
 * @n: starting point
 * Retrn: void
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n > 98)
		{
			printf("%d, ", n--);
		printf("%d\n" n);
		}
	}
	else if (n > 98 )
	{
		while (n < 98)
		{
			printf("%d, ", n++);
		}

	}
		printf("98\n", n);

}

