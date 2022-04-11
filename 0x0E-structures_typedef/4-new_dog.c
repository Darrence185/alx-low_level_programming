#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strlen - get length of string.
 * @s: pointer to a char.
 * Return: length of string
 */
int _strlen(char *s)
{
	int counter = 0;

	while (*s != '\0')
	{
		s++;
		counter++;
	}
	return (counter);
}
/**
 * _strcpy - copies the string including \0 to buffer pointed to.
 *
 * @dest: pointer where string is copied.
 * @src: string arg to be copied.
 *
 * Return: the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int sl = 0;

	while (src[sl] != '\0')
	{
		sl++;
	}
	for (i = 0; i < sl; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
/**
 * new_dog - create new dog
 * @name: pointer to type char
 * @age: float type
 * @owner: pointer to type char
 * Return: pointer to type dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndg;
	int len = 0, leno = 0;

	len = _strlen(name);
	leno = _strlen(owner);
	ndg = malloc(sizeof(dog_t));
	if (ndg == NULL)
		return (NULL);
	ndg->name = malloc(sizeof(char) * len + 1);
	if (ndg->name == NULL)
	{
		free(ndg);
		return (NULL);
	}
	ndg->owner = malloc(sizeof(char) * leno + 1);
	if (ndg->owner == NULL)
	{
		free(ndg);
		free(ndg->name);
		return (NULL);
	}
	_strcpy(ndg->name, name);
	_strcpy(ndg->owner, owner);
	ndg->age = age;
	return (ndg);
}
