#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - nested loop to make grid
 *
 * @width: width input
 *
 * @height: height input
 *
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
int **yee;
int a, b;

if (width <= 0 || height <= 0)
return (NULL);

yee = malloc(sizeof(int *) * height);

if (yee == NULL)
return (NULL);

for (a = 0; a < height; a++)
{
yee[a] = malloc(sizeof(int) * width);

if (yee[a] == NULL)
{
for (; a >= 0; a--)
free(yee[a]);

free(yee);
return (NULL);
}
}

for (a = 0; a < height; a++)
{
for (b = 0; b < width; b++)
yee[a][b] = 0;
}

return (yee);
}
