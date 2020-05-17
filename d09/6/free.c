#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
void freef(char ***factory)
{
	int i = 0;
	while (factory[0][i])
		free(factory[0][i++]);
	free(factory[0]);
}

char **table(int n)
{
	int i = 0;
	int k = 0;
	char **str;
	str=(char **)malloc(sizeof(char *) * (n + 1));
	while (i < n)
	{
		str[i] = (char *)malloc(sizeof(char) * (n + 1));
		while (k < n)
		{
			str[i][k] = '0' + k;
			k++;
		}
		str[i++][k] = '\0';
		k = 0;
	}
	str[i] = '\0';
	return(str);
}
int main(void)
{
	int i = 0;
	char **s = table(5);
	while(s[i])
		printf("%s\n", s[i++]);
	freef(&s);
		printf("FREED %s",s[0]);
	return(0);
}
