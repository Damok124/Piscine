#include <stdlib.h>

int		check_cell(int x, int y, int size, int **boxes);
int		check_cell_value(int x, int y, int size, int **boxes);
void	print_boxes(int size, int **boxes);

int**		backtracking_top_left(int size, int **safe, int **boxes)
{
	int	i;
	int	j;
	int	cache;
	
	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (boxes[i][j] == 0)
			{
				cache = check_cell(i, j, size, boxes);
				while (cache == -1)
				{
					if (--j == -1)
						return NULL;
					if (safe[i][j])
					    continue;
					cache = check_cell_value(i, j, size, boxes);
				}
				boxes[i][j] = cache;
			}
			j++;
		}
		i++;
	}
	return boxes;
}
int**		backtracking_top_right(int size, int **safe, int **boxes)
{
	int	i;
	int	j;
	int	cache;
	
	i = 0;
	while (i < size)
	{
		j = size - 1;
		while (j >= 0)
		{
			if (boxes[i][j] == 0)
			{
				cache = check_cell(i, j, size, boxes);
				while (cache == -1)
				{
					if (++j == size)
						return NULL;
					if (safe[i][j])
					    continue;
					cache = check_cell_value(i, j, size, boxes);
				}
				boxes[i][j] = cache;
			}
			j--;
		}
		i++;
	}
	return boxes;
}
int**		backtracking_bottom_right(int size, int **safe, int **boxes)
{
	int	i;
	int	j;
	int	cache;
	
	i = size - 1;
	while (i >= 0)
	{
		j = size - 1;
		while (j >= 0)
		{
			if (boxes[i][j] == 0)
			{
				cache = check_cell(i, j, size, boxes);
				while (cache == -1)
				{
					if (++j == size)
						return NULL;
					if (safe[i][j])
					    continue;
					cache = check_cell_value(i, j, size, boxes);
				}
				boxes[i][j] = cache;
			}
			j--;
		}
		i--;
	}
	return boxes;
}
int**		backtracking_bottom_left(int size, int **safe, int **boxes)
{
	int	i;
	int	j;
	int	cache;
	
	i = size - 1;
	while (i >= 0)
	{
		j = 0;
		while (j < size)
		{
			if (boxes[i][j] == 0)
			{
				cache = check_cell(i, j, size, boxes);
				while (cache == -1)
				{
					if (--j == -1)
						return NULL;
					if (safe[i][j])
					    continue;
					cache = check_cell_value(i, j, size, boxes);
				}
				boxes[i][j] = cache;
			}
			j++;
		}
		i--;
	}
	return boxes;
}