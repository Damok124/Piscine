#include <unistd.h>
#include <stdio.h>
#include <bsd/string.h>

/*char *ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}*/

int main(void)
{
	char dest[] = "Detruire";
	char src[] = "Construire";
	int n;

	n = 5;
	//char dest1[] = "Detruire";
	//char src1[] = "Construire";

	printf("%li\n", strlcpy(dest, src, n));
	//printf("%s\n", ft_strcpy(dest1, src1));
	return (0);
}