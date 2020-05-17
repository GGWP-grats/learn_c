#include <stdio.h>
#include <unistd.h>

int		max(int* tab, unsigned int len)
{
	int a;

	a = tab[len];
	while(len)
	{
		if (tab[len] > a)	
			a = tab[len];
		len--;
	}
	return a;
}

int		main(void)
{
	int a[] = {1, 25, 65, 22222, 123, -22, 5555};
	printf("%d", max(a, 6));
	return 0;
}
