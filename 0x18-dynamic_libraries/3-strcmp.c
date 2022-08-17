#include "main.h"

/**
 * _strcmp - compare strings
 * @s1: first input char
 * @s2: second input char
 *
 * Description: the function compares two strings
 * Return: character count
 */

int _strcmp(char *s1, char *s2)
{
	int i, diff;

	for (i = 0; s1[i] != '\0'; ++i)
	{
		if (s1[i] > s2[i])
		{
			diff = s1[i] - s2[i];
			return (diff);
		}
		else if (s1[i] < s2[i])
		{
			diff = s1[i] - s2[i];
			return (diff);
		}
	}
	return (0);
}
