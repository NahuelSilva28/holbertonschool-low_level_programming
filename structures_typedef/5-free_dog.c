#include <stdlib.h>
#include "dog.h"
/**
*free_dog - go out dogs
*@d: pointer to dog for free
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
