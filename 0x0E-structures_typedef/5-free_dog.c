#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog-frees the reserved memory
 * @d:dog_t type
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
}
