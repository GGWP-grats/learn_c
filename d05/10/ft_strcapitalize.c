#include <stdio.h>
#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 1;
if (str[0] >= 'a' && str[0] <= 'z')
	str[0] = str [0] - 32;
while (str[i])
{
	if ((str [i] < 48 ||
		(str[i] < 65 && 58 < str[i]) ||
		(str[i] > 'Z' && 'a' > str[i]) ||
		(str[i] > 'z')) &&
			(str[i + 1] >= 'a' && str[i + 1] <= 'z'))
		{
			str[i + 1] -= 32;
		}	
		else if (str[i + 1] >= 'A' && str[i + 1] <= 'Z')
			str[i + 1] += 32;
		i++;
	}
	return(str);
}

int main(void)
{
	char a[] = "salut, comMent tu vas \0? 42mots quarante-deux; cinquante+et+un";
	printf("%s", ft_strcapitalize(a));
	return(0);
}
