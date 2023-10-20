#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - Prints a struct dog.
 * @d: Pointer to the dog struct to print.
 * Description: Long descPrints a struct dog.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(1);
	else if (!d->name)
		printf("Name: (nil)");
	else if (!d->age)
		printf("Age: (nil)");
	else if (!d->owner)
		printf("Owner: (nil)");
	else
		{
			printf("Name: %s\n", d->name);
			printf("Age: %f\n", d->age);
			printf("Owner: %s\n", d->owner);
		}
}
