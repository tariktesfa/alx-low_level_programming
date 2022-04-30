#include "main.h"

/**
 * _strspn - gets length
 * @s: input string
 * @accept: accepted characters
 *
 * Description: gets the length of a prefix substring
 * Return: num of bytes in the initial seg of s
 * consisting only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}
		if (!accept[j])
		{
			break;
		}
	}
	return (i);
}


