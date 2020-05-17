#include <stdio.h>
#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *ptr;
	
	i = 0;
	if (min < max)
	{
		ptr =(int *)malloc(sizeof(int) * (max - min) + 1);
		if (ptr)
		{
			while(min < max)
				ptr[i++] = min++;
		}
		*range = ptr;
		return (i);
	}
	return(i);
}

int		main(void)
{
	int *b;
	int n = 0;
	int z = 100;
	printf("%i", ft_ultimate_range(&b, n, z));
	return (0);
}
