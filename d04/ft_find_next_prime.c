#include <stdio.h>

int ft_find_next_prime(int nb)
{ 
    int i;

    i = 2;
    while (nb < 2)
        nb++;
    while (i <= (nb / 2))
    {
        if (!(nb % i))
        {
            nb++;
            i = 2;
        }
        i++;
    }
    return(nb);
}

int main (void)
{
    printf("%d", ft_find_next_prime(-1));
    return(0);
}