#include <stdio.h>

int     ft_iterative_power(int nbr, int power)
{
    int pr;

    pr = nbr;
    if (power == 0)
        return (1);
    if (power < 0)
        return (0);
    while (power > 1)
    {
        nbr *= pr;
        power--;
    }
    return(nbr);
}

int main(void)
{
    printf("%d", ft_iterative_power(2, 1));
    return(0);
}