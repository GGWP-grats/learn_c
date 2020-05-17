#include <stdlib.h>
#include <stdio.h>

char		*ft_contact_params(int argc, char **argv)
{
	printf("ASAD");
	int i;
	int j;
	int k;
	char *str;
	if(!(str = (char *)malloc(sizeof(char) * 9001)))
		return(NULL);
	printf("AAA");	
	k = 0;
	while (k < 9001)
		str[k++] = '\0';
	k = 0;
	i = 1;
	while(--argc)
	{
		j = 0;
		while(argv[i][j])
			str[k++] = argv[i][j++];
		str[k++] = '\n';
		i++;
	}
	return (str);
}
/*
char		*ft_contact_params(int argc, char **argv)
{
	int		i;	
	int		j;	
	int		k;	
	char	*str;
	
	if (!(str = (char *)malloc(sizeof(char) * 9001)))
		return (NULL);
	k = 0;
	while (k < 9001)
		str[k++] = '\0';
	k = 0;
	i = 1;
	while (--argc)
	{
		j = 0;
		while (argv[i][j])	
			str[k++] = argv[i][j++];
		str[k++] = '\n';
		i += 1;
	}
	return (str);
}*/
int main(int argc, char **argv)
{	
    printf("%s", ft_contact_params(argc, argv));
	return (0);	
}
