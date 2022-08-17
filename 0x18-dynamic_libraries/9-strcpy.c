#include "main.h"

/**
 * print_array - print array
 * @dest: character pointer
 * @src: character source
 *
 * Description: copies string pointed to by src
 * Return: return pointer
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = src[i];
	return (dest);
}

