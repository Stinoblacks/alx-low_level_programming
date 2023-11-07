#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free memory of dog
 * @d: poiner to dog
 */

void free_dog(struct dog *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);

		free(d);
	}
}
