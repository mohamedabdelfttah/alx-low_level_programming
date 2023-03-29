#include <main.h>

char *_strcat(char *dest, char *src)
{
char *ptr;
int i, j;

for (i = 0; dest[i] != '\0'; ++i)
;

for (j = 0; src[j] != '\0'; ++j, ++i)
{
dest[i] = src[j];
}
dest[i] = '\0';
ptr = dest;
for (i = 0; ptr[i] != '\0'; ++i)
{
_putchar(ptr[i]);
}
return (0);
}
