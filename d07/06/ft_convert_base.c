#include <stdio.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	
	return (nbr);
}
int main()
{
	char nbr[] = {"12345"};
	char basefrom[] = {"0123456789"};
	char baseto[] = {"0123456789abcdef"};
	printf("was %s\nbecame %s\n", nbr, ft_convert_base(nbr, basefrom, baseto));
	return(0);
}
