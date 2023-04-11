#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees 2D array
 *
 * @grid: 2D grid
 * @height: height dimension of grid
 *
 * Description: frees memory of grid
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
int j;

for (j = 0; j < height; j++)
{
free(grid[j]);
}
free(grid);
}
