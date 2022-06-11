#include <unistd.h>

void	print_boxes(int **boxes)
{
	int	i;
	int j;
	char a;
	
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
		    if (boxes[i][j] == 0)
		        write(1, "0", 1);
		    else
			{
				a = boxes[i][j] + '0';
				write(1, &a, 1);
			}		        
		    write(1, " ", 1);
		    j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
