#include <stdio.h>

void ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
	int tmp;
	int tmp2;
	tmp = ***a;
	tmp2 = *******c;
	***a = *b;
	*******c = tmp;
	*b = ****d;
	****d = tmp2;
}
int main(void)
{
	int a,b,c,d;
	a = 10;
	b = 20;
	c = 30;
	d = 40;
	int *a =
}
