#include "dog.h"

/**
 * init_dog - Initialize a variable of type struct dog.
 * @d: Pointer to the dog struct whose members should be initialized.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The dog's owner.
 * Description: Initialize a variable of type struct dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
