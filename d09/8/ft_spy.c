#include <unistd.h>

int		main(int argc, char *argv[])
{
	int i;
	int j;

	i = 0;
	j = 1;
	while (--argc)
	{
		if (argv[j][i] == ("president" || "attack" || "powers"))
			write(1, "Alert!!\n", 8);
		j += 1;
	}
	return (0);
}
