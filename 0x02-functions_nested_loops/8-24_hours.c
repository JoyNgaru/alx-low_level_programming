#include "main.h"
/**
 * jack_bauer - Print 24hr clock system
 */
void jack_bauer(void)
{
	for (hour = 0; hour <= 23; hour++)
	{
		for (minute = 0; minute <= 59; miniute++)
		{
			_putchar((hour / 10) + '0');
			_putchat((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
		}
	}
}
