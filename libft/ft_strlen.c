#include <unistd.h>

int		ft_strlen(char *str)
{
    int cntr;
    cntr = 0;
    while (str[cntr])
		cntr++;
	return (cntr);
}
