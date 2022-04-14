#include "main.h"

/**
 * print_diagonal - Draws a diagonal line using the \ character.
 * @n: The number of \ characters to be printed.
 */
void print_diagonal(int n)
{
	int leng, space;

	if (n > 0)
	{
		for (leng = 0; leng < n; leng++)
		{
			for (space = 0; space < leng; space++)
				_putchar(' ');
			_putchar('\\');

			if (leng == n - 1)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
