#include main.h
/**
 * print_times_table - print the n times table, starting with 0.
 * * @n: number of the times table
 * Return: 0 if n is greater than 15
 */
void print_times_table(int n)
{
	int num, times, product;

	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');
			for (times = 1; times <= n; times++)
			{
				_putchar(',');
				_putchar(' ');

				product = num * times;
				if (product <= 99)
					_putchar(' ');
				if (product <= 9)
					_putchar(' ');
				if (product >= 100)
				{
					_putchar((product / 100) + '0');
					_putchar((product / 10) % 10 '0');
			}
				else if (product <= 99 && product >= 10)
				{
					_putchar((produst % 10) + '0');
				}
				_putchar('\n');
			}
		}
	}
}
