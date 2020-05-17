#include <unistd.h>

void		replace(char *a, char *b, char *c)
{
	int i;
	
	i = 0;
	while(a[i])
	{
		if(a[i] == *b)
			write(1, c, 1);
		else if (a[i] != *b)
			write(1, &a[i], 1);
		i++;
	}
}

int main (int argc, char **argv)
{
	if (argc == 4)
		if (!(argv[2][1] != '\0' || argv[3][1] != '\0'))
			replace(argv[1], argv[2], argv[3]);
	write(1, "\n", 1);
	return 0;
}
