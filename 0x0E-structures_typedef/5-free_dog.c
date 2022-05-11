#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees variable of type dog_t
 * @d: dog_t object to free
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
