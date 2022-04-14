#include "main.h"

/**
 * print_line - Draws a straight line using the character _.
 * @n: The number of _ characters to be printed.
 */
void print_line(int n)
{
	int leng;

	if (n > 0)
	{
		for (leng = 0; leng < n; leng++)
			_putchar('_');
	}

	_putchar('\n');
}

