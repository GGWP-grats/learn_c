#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *ft_strdup(char *src)
{
	char *dest;
	int n;

	n = 0;
	while (src[n])
		n++;
	if(!(dest = malloc(sizeof(char)*(n + 1))))
			return(NULL);
	n = 0;
	while(src[n])
	{
		dest[n] = src[n];
		n++;
	}
	dest[n] ='\0';
	return(dest);
}

int main(void)
{	
	char a[] ="asdasd";
	printf("ft_strdup: %s\n", ft_strdup(a));
	printf("strdup: %s\n", strdup(a));
	return(0);
}
