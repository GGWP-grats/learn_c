#include <stdio.h>

int     ft_iterative_factorial(int nb)
{
    int a;

    a = nb;
    if (a > 0)
    {
        while (a > 1)
        {
          nb = nb * (a - 1);
          a--;
        }
    }
    else if (a == 0)
        return (1);
    else 
        return (0);
    return(nb);
}

int main(void)
{
    printf("%d", ft_iterative_factorial(5));
    return (0);
}