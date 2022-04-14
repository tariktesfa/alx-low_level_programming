#include "main.h"

/**
 * print_most_numbers - Prints the numbers from 0-9 except for 2 and 4.
 */
void print_most_numbers(void)
{
	int man;

	for (man = 0; man <= 9; man++)
	{
		if (man != 2 && man != 4)
			_putchar((man % 10) + '0');
	}

	_putchar('\n');
}
