#include <unistd.h>
#include <stdlib.h>

void	fill_horizontal(int size, int *boxes, int *safe);
void	fill_vertical(int pos, int size, int **boxes, int **safe);
void	fill_rev_horizontal(int size, int *boxes, int *safe);
void	fill_rev_vertical(int pos, int size, int **boxes, int **safe);
int		check_clues(int x, int size, int **input, int *boxes);
void	print_boxes(int size, int **boxes);
int		**backtracking_top_left(int size, int **safe, int **boxes);
int		**backtracking_top_right(int size, int **safe, int **boxes);
int		**backtracking_bottom_left(int size, int **safe, int **boxes);
int		**backtracking_bottom_right(int size, int **safe, int **boxes);
int 	**duplicata(int size, int **boxes);

int		ft_strlen(char *str)
{
	int	i;
	
	i = 0;
	while(str[i++])
		;
	return (i);
}

int**	get_values(char *str, int size)
{
	int	i;
	int	j;
	int	k;
	int	check;
	int	**result;

	//GET LENGTH OF STR FOR CHECK FORMAT
	if (ft_strlen(str) != size * size * 2)
		return (NULL);
	//END
	//INIT PTR
	i = 0;
	result = malloc((size + 1) * sizeof(int *));
	while (i < size)
		result[i++] = malloc(size * sizeof(int));
	//END
	//CHECK FORMAT
	i = 0;
	j = 0;
	while (j < size)
	{
		k = 0;
		while (k < size)
		{
			check = str[i] - '0'; //Get le chiffre
			if (check < 1 || check > size) //S'il est entre 1 et le SIZE
				return (NULL);
			result[j][k] = check;	
			i += 2;
			k++;
		}
		j++;
	}
	//END
	return (result);
}

int	compute_data(char *str, int size)
{
	int		i;
	int 	j;
	int 	**a;
	int	**safe;
	int	**input;
	int	**boxes;

	//GET ARGV
	input = get_values(str, size);
	if (!input)
		return (1);
	//END
	//ALLOC BOXES
	boxes = malloc((size + 1) * sizeof(int *));
	i = 0;
	while (i < size)
		boxes[i++] = malloc(size * sizeof(int));
	safe = malloc((size + 1) * sizeof(int *));
	i = 0;
	while (i < size)
		safe[i++] = malloc(size * sizeof(int));
	//END
	//LOOP CLUES AND APPLY PATTERNS
	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (input[i][j] == size)
			{
				if (i == 0)
					fill_vertical(j, size, boxes, safe);
				else if (i == 1)
					fill_rev_vertical(j, size, boxes, safe);
				else if (i == 2)					
					fill_horizontal(size, boxes[j], safe[j]);
				else					
					fill_rev_horizontal(size, boxes[j], safe[j]);
			}
			else if (input[i][j] == 1)
			{
				if (i == 0)
				{
					boxes[0][j] = size;
					safe[0][j] = 1;
				}
				else if (i == 1)
				{
					boxes[size - 1][j] = size;
					safe[size - 1][j] = 1;
				}
				else if (i == 2)
				{
					boxes[j][0] = size;
					safe[j][0] = 1;
				}
				else
				{
					boxes[j][size - 1] = size;
					safe[j][size - 1] = 1;
				}
			}
			else if (input[i][j] == 2)
			{
				if (i == 0)
				{
					if (input[1][j] == 1)
					{
						boxes[0][j] = size - 1;
						safe[0][j] = 1;
					} else if (input[1][j] == 3)
					{
						boxes[1][j] = size;
						safe[1][j] = 1;
					}			
				}
				else if (i == 1)
				{
					if (input[0][j] == 1)
					{
						boxes[size - 1][j] = size - 1;
						safe[size - 1][j] = 1;
					} else if (input[0][j] == 3)
					{
						boxes[size - 2][j] = size;
						safe[size - 2][j] = 1;	
					}
				}
				else if (i == 2)
				{
					if (input[3][j] == 1)
					{
						boxes[j][0] = size - 1;
						safe[j][0] = 1;
					} else if (input[3][j] == 3)
					{
						boxes[j][1] = size;
						safe[j][1] = 1;
					}					
				}
				else if (i == 3)
				{
					if (input[2][j] == 1)
					{
						boxes[j][size - 1] = size - 1;
						safe[j][size - 1] = 1;
					} else if (input[2][j] == 3)
					{
						boxes[j][size - 2] = size;
						safe[j][size - 2] = 1;
					}
				}
				
			}
			j++;
		}
		i++;
	}
	//END
	//LOOP BOXES
	a = NULL;
	if ((a = backtracking_top_left(size, safe, duplicata(size, boxes))))
	{
		print_boxes(size, a);
		return 0;
	}
	if ((a = backtracking_top_right(size, safe, duplicata(size, boxes))))
	{
		print_boxes(size, a);
		return 0;
	}
	if ((a = backtracking_bottom_left(size, safe, duplicata(size, boxes))))
	{
		print_boxes(size, a);
		return 0;
	}
	if ((a = backtracking_bottom_right(size, safe, duplicata(size, boxes))))
	{
		print_boxes(size, a);
		return 0;
	}
				
	//END
	//PRINT ERROR
	write(1, "Error", 5);	
	//END
	return (0);
}

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		write(1, "Error", 5);
		return (0);
	}
	
	if (compute_data(argv[1], 4))
	{
		write(1, "Error", 5);
		return (0);
	}
	return (0);
}
