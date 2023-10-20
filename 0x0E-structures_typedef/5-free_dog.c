#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees the memory taken up by a dog struct.
 * @d: The dog type whose memory to free.
 * Description: Frees the memory taken up by a dog struct.
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
