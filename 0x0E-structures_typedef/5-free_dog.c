#include "dog.h"
#include <stdlib.h>
/**
 *_free_dog -  function that frees dogs
 *@d:takes pointer
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
