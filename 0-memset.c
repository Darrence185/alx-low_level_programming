#include "holberton.h"

/**
 * _memset - fill memory with constatant byte.
 *
 * @s: type pointer to type char.
 * @b: type char.
 * @n: type int -size to fill.
 *
 * Return: pointer to char.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}