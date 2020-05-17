#include <unistd.h>
#include <stdio.h>

int		is_power_of_2(unsigned int a)
{
	return((is_power_of_2(a % 2) == 1) ? 0 : 1);
}

int main (void)
{
	unsigned int n = 128;
	printf("%d", is_power_of_2(n));
	return 0;
}
