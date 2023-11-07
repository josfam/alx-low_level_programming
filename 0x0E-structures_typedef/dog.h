#ifndef DOG_HEADER
#define DOG_HEADER

/**
 * struct dog - Represents a dog
 * @name: The dog's name.
 * @age: The dog's age.
 * @owner: The dog's owner.
 *
 * Description: Represents a dog with a name, age, and an owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/* Initializes a variable of type struct dog */
void init_dog(struct dog *d, char *name, float age, char *owner);

/* Prints a struct dog */
void print_dog(struct dog *d);

#endif