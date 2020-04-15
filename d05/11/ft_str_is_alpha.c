#include <stdio.h>
#include <unistd.h>
void ft_putchar(char c)
{
	write (1, &c, 1);
}

int		ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'A' && 'Z' >= str[i]) && !(str[i] >= 'a' && 'z' >= str[i]))
			return (0);
		i++;
	}
	return(1);
}
int	main()
{
	char a[] = "a/aasssddd";
 	printf("%d", ft_str_is_alpha(a));
	return(0);
}
