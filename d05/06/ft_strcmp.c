#include <stdio.h>
#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	int ch;
	int nb;

	ch = 0;
	nb = 0;
	while (!nb)
	{
		putchar(s1[ch]);
		if (s1[ch] == s2[ch])
				ch++;
		if (s1[ch] > s2[ch])
				return(1);
		if (s2[ch] > s1[ch])
				return(-1);
		if (s1[ch] == 0 && s2[ch] == 0)
				return(0);
	}
	return(nb);
}

int main (void)
{
	printf("%d", ft_strcmp("0 ", " "));
	return 0;
}
