#ifndef DOG_HEADER
#define DOG_HEADER

/**
 * struct dog - Represents a dog
 * @name: The dog's name.
 * @age: The dog's age.
 * @owner: The dog's owner.
 *
 * Description: Represents a dog with a name, age, and owner.
*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

/* Initializes a variable of type dog */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
