#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <unistd.h>
char	*reverse_str(char *str)
{
	char *tmp;
	int i,k;
	
	i = k = 0;
	while (str[++i]);
	printf("%d lent\n", i);
	if (!(tmp =(char *)malloc(sizeof(char) * i + 1)))
		return (NULL);
	while (i >= 0)
	{
		i--;
		tmp[k] = str[i];
		k++;
	}
	free(str);
	tmp[k] = '\0';
	return(tmp);
}

char	*ft_itoa(int n)
{
	char *tmp;
	int negative;
	int i;

	i = 0;
	negative = 0;
	tmp = (char *) malloc(sizeof(char) * 12);
	if (n == -2147483648)
		return("-2147483648");
	if (n < 0)
	{
		negative = 1;
		n *= -1;		
	}
	while (n > 9)
	{
		tmp[i++] = '0' + n % 10;
		n /= 10;
	}
	tmp[i++] = '0' + n;
	if (negative)
		tmp[i++] = '-';
	tmp[i] = '\0';
	return(reverse_str(tmp));
}

int main (int ac, char **av)
{
	int n;
	int min = INT_MIN;
	printf("%d\n", min);
	if (ac == 2)
	{
		n =	atoi(av[1]);
		printf("num %d ft_itoa %s\n", n, ft_itoa(n));
	}
	return (0);
}
