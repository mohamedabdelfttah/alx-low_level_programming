#include "main.h"
/**
 *string_nconcat - function that concatenates two strings
 *@s1:pointer
 *@s2:pointer
 *@n:intger
 *Return:str
 */

char *string_nconcat(char *s1, char *s2, unsigned int n);
{
unsigned int i, j;
char *str;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

for (i = 0; s1[i] != '\0'; i++)
;

str = malloc(sizeof(char) * (i + n + 1));

if (str == NULL)
return (NULL);

for (i = 0; s1[i] != '\0'; i++)
str[i] = s1[i];

for (j = 0; s2[j] != '\0' && j < n; j++)
str[i + j] = s2[j];

str[i + j] = '\0';

return (str);
}
