#include <stdlib.h>
#include "dog.h"

/**
 * free_dog- free memory
 *@d: array 
 * Description: Free memory for sturct
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
