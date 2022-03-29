#include "main.h"

/**
 * _strspn - get length of a prefix substring.
 *
 * @s: type pointer to type char.
 * @accept: type int -size to fill.
 *
 * Return: num of bytes where s == accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int k;

	k = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0' && accept[j] != s[i]; j++)
			;
		if (s[i] == accept[j])
			k++;
		if (accept[j] == '\0')
			return (k);
	}
	return (k);
	return (j);
}
