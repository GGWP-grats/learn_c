#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *n;
	int z;
	if(min > max || !(n = (int *)malloc(sizeof(int) * (max - min))))
		return(NULL);

	n = (int *)malloc(sizeof(int) * (max - min));
	z = 0;
	while (min < max)
	{
		n[z++] = min;
		min++;
	}
	return(n);
}

int main(void)
{
	int *z, i;
	z = ft_range(15, 130);

	for (i = 0; i < 115; i++)
		printf("%i is %i\n", i, z[i]);
	for (i = 0; i < 115; i++){
		free(z);
		printf("%i le %i\n", i, z[i]);
	}
	return(0);
}
