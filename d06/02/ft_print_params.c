#include <unistd.h>

void ft_putchar(char c);

int		main(int argc, char **argv)
{
	int par;
	int nb;

	nb = 0;
	par = 1;
	while(argc > par)
	{
		while(argv[par][nb])
			ft_putchar(argv[par][nb++]);
		nb = 0;
		par++;
		ft_putchar('\n');
	}
	return(0);
}
