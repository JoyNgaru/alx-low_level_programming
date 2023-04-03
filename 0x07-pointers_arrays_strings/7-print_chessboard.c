#include "main.h"
/**
 * print_chessboard - lets get us a chessboard!!
 * @a: array
 * Return: 0
 */
void print_chessboard(char (*a)[8])
{
	int black;
	int red;

	for (black = 0; black < 8; black++)
	{
		for (red = 0; red < 8; red++)
			_putchar(a[black][red]);
		_putchar('\n');
	}
}
