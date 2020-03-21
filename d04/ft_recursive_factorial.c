#include <stdio.h>

int     ft_recursive_factorial(int nb)
{
    int q;

    if (nb > 0)
        q = ft_recursive_factorial(nb - 1) * nb;
    else if (nb == 0)
        return (1);
    else 
        return (0);
    return(q);
}

int main(void)
{
    printf("%d", ft_recursive_factorial(12));
    return (0);
}