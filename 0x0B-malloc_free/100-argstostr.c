#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments of your program
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: pointer to the new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
char *str;
int x, y, z, len;

if (ac == 0 || av == NULL)
return (NULL);

len = 0;
for (x = 0; x < ac; x++)
{
for (y = 0; av[x][y]; y++)
len++;
len++;
}

str = malloc(sizeof(char) * (len + 1));
if (str == NULL)
return (NULL);

z = 0;
for (x = 0; x < ac; x++)
{
for (y = 0; av[x][y]; y++)
{
str[z] = av[x][y];
z++;
}
str[z] = '\n';
z++;
}
str[z] = '\0';

return (str);
}
