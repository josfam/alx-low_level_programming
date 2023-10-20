#include "dog.h"

/**
 * init_dog - Allocates memory using malloc.
 * @d: Pointer to the dog struct whose members should be initialized.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The dog's owner.
 * Description: Allocates memory using malloc.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
