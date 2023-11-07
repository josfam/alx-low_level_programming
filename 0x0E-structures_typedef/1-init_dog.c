#include "dog.h"

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: The struct dog to be initialized.
 * @name: The name to be assigned to the struct dog.
 * @age: The age to be assigned to the struct dog.
 * @owner: The owner to be assigned to the struct dog.
 * Description: Initializes a variable of type struct dog.
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
