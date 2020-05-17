#include <unistd.h>
void	putstr(char *str)
{
	while(*str)
		write(1, str++, 1);
}

void	last(char *arg)
{
	int i;
	
	i = 0;
	while (arg[i])
	{
		if(arg[i] == ' ')
		{
			while(arg[i] != ' ' && arg[i])
				i++;
			arg += i;
			i = 0;
		}
		i++;
	}
	putstr(++arg);
}

int		main(int argc, char** argv)
{
	if (argc == 2)
		last(argv[1]);
	write(1, "\n", 1);
	return 0;
}
