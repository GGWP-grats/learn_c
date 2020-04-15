#include <stdio.h>
#include <unistd.h>
#include <string.h>

char *ft_strcat(char *dest, char *str)
{
	int i;
	int n;

	i = 0;
	n = 0;
	while(dest[i])
		i++;
	while(str[n])
	{
		dest[i + n] = str[n];
		n++;
	}
	dest [i + n] = '\0';
	return (dest);
}

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("ft_strcat is %s\n", ft_strcat(argv[1], argv[2]));
		printf("strcat is %s", strcat(argv[1], argv[2]));
	}
	else 
		printf("argc != 3");
	return(0);
}
