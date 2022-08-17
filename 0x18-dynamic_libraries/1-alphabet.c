#include "main.h"

/**
 * print_alphabet - prints all aphabets in lowercase
 *
 * Description: They are sorted by default
 * return (0)
 */

void print_alphabet(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}

