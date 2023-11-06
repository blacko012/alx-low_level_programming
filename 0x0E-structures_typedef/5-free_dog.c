#include <stdlib.h>
#include "dog.h"

/**
*free_dog - Frees memory allocated for a struct dog
*@d: dog to be freed
*
*/
void free_dog(dog_t *d)
{
if (d == NULL)
return;

free(d->name);
free(d->owner);
free(d);
}
