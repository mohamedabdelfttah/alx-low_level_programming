#include "dog.h"
/**
 *init_dog -  function takes in a pointer
 *@d:struct pointer
 *@name:char
 *@age:intger
 *@owner:char
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
