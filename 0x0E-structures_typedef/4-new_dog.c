#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - Creates a new dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 * Description: Creates a new dog.
 * Return: Pointer to a new dog struct.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = (dog_t *)malloc(sizeof(dog_t));
	if (!new_dog)
		return (NULL);
	if (!name || !age || !owner)
		return (NULL);

	new_dog->name = strdup(name);
	new_dog->age = age;
	new_dog->owner = strdup(owner);

	return (new_dog);
}
