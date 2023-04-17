#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *_strlen - function to find the length
 *@s:string
 *Return:length
 */
int _strlen(char *s)
{
int len = 0;
while (*s++)
{
len++;
}
return (len);
}

/**
 *_strcpy - function to find  to copy a string
 *@dest:string
 *@src:copy's file
 *Return:string
 */

char *_strcpy(char *dest, char *src)
{
char *temp = dest;
while (*src)
{
*dest++ = *src++;
}
*dest = '\0';
return (temp);
}

/**
 *new_dog - function creates a new dog.
 * @name: name's dog
 * @age: age's dog
 * @owner: owner's dog
 * Return: newdog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d = malloc(sizeof(dog_t));

if (d == NULL)
{
return (NULL);
}
d->name = malloc(_strlen(name) + 1);

if (d->name == NULL)
{
free(d);
return (NULL);
}

_strcpy(d->name, name);

d->age = age;

d->owner = malloc(_strlen(owner) + 1);

if (d->owner == NULL)
{
free(d->name);
free(d);
return (NULL);
}
_strcpy(d->owner, owner);

return (d);
}
