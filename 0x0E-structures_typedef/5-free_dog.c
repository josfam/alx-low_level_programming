#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees memory allocated by a dog.
 * @d: The dog whose memory to free.
 * Description: Frees memory allocated by a dog.
 */
void free_dog(dog_t *d)
{
	/* free memory allocated for the name, owner, and the struct */
	free(d->name);
	free(d->owner);
	free(d);
}

