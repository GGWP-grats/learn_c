#include <unistd.h>

void ft_putchar(char c);

int main(int argc, char **argv)
{
	int n;

	n = 0;
	(void)argc;
	while (argv[0][n])
		ft_putchar(argv[0][n++]);
	ft_putchar('\n');
	return(0);
}
