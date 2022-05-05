#include <stddef.h>
#include <stdlib.h>
/**
 * free_grid - frees 2-D grid
 * @grid: 2-D grid
 * @height: height of grid
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i <= height - 1; i++)
		free(*(grid + i));
	free(grid);
}
