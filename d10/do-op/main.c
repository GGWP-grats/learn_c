#include <unistd.h>
#include "ft.h"

int		main(int argc, char *argv[])
{
	int n;
	int b;

	if (argc != 4)
		return(0);

	n = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	if (argv[2][0] == '+')
		add(n, b);
	else if (argv[2][0] == '-')
		sub(n, b);
	else if (argv[2][0] == '/')
		devision(n, b);
	else if (argv[2][0] == '%')	
		modul(n, b);
	else if (argv[2][0] == '*')	
		mult(n, b);
	else
		write(1, "0\n", 2);
	return(0);
}
