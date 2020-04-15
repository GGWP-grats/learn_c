#include <stdio.h>
#include <unistd.h>

char		*ft_strupcase(char *str)
{
	int ch;
	printf("123\n");
	ch = 0;
	while (str[ch])
	{
		if (str[ch] <= 'z' && str[ch] >= 'a')
			str[ch] = str[ch] - 32;
		ch++;
	}
	return(str);
}

int main ()
{
	char a[] = "asdaDDDdasd";
	printf("%s", ft_strupcase(a));
	return(0);
}
