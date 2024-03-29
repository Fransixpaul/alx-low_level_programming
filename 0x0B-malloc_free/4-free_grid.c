#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimentional grid
 * @grid: multidimentional array of integers
 * @height: array of the height
 *
 * Return: no return
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
