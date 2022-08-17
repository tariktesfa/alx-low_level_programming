#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: input destinations
 * @src: input source
 * @n: input integer
 *
 * Description: copies n bytes from memory area src to memory area dest
 * Return: returns a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
