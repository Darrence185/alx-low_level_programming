#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - a struct dog.
 * @d: pointer to type struct dog.
 * Return: nothing.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		printf("Age: %0.6f\n", d->age);
		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
