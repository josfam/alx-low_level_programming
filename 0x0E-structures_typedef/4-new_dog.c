#include "dog.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - Creates a new dog.
 * @name: The dog's name.
 * @age: The dog's age.
 * @owner: The dog's owner.
 * Description: Creates a new dog.
 * Return: The newly created dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *this_dog;

	this_dog = (dog_t *)malloc(sizeof(dog_t));

	if (!this_dog)
		return (NULL);

	this_dog->name = strdup(name);
	this_dog->age = age;
	this_dog->owner = strdup(owner);

	return (this_dog);
}
