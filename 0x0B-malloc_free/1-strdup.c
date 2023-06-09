#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 *
 * @str: char
 *
 * Return: 0
 */
char *_strdup(char *str)
{
char *ddd;
int j, k = 0;

if (str == NULL)
return (NULL);

j = 0;
while (str[j] != '\0')
j++;
ddd = malloc(sizeof(char) * (j + 1));

if (ddd == NULL)
return (NULL);

for (k = 0; str[k]; k++)
ddd[k] = str[k];

return (ddd);
}
