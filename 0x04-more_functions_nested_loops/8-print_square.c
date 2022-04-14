#include "main.h"

/**
 * print_square - Prints a squareusing the character #.
 * @size: The size of the square.
 */
void print_square(int size)
{
	int yft, wid;

	if (size > 0)
	{
		for (yft = 0; yft < size; yft++)
		{
			for (wid = 0; wid < size; wid++)
				_putchar('#');

			if (yft == size - 1)
				continue;
			_putchar('\n');
		}
	}

	_putchar('\n');
}
