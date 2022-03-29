#include "main.h"

/**
 * _memcpy - copy memory area to another.
 *
 * @dest: type pointer to type char.
 * @src: type pointer to type char.
 * @n: type int -size to be copied.
 *
 * Return: pointer to char.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
