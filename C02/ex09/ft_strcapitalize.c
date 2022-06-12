#include <unistd.h>
#include <stdio.h>

char *ft_strcapitalize(char *str)
{
	int i;
	int j;

	i = 0;
	while (str[i])
	{
		j = -32;
		while (str[i] < 'a' || str[i] > 'z')
		{
			if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9'))
				j = 0;
			i++;
		}
		while ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9'))
		{
			str[i] += j;
			if (j != 0)
				j = 0;
			i++;
		}
	}
	return (str);
}

int main(int argc, char **argv)
{
	argc++;
	printf("%s\n", ft_strcapitalize(argv[1]));
	return (0);
}