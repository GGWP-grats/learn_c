#include <stdio.h>

int ft_fibonacci(int index)
{
    if (index == 1 || index == 2)
        return (1);
    if (index  == 0)
        return (0);
    if (index < 0)
        return(-1);
    return(ft_fibonacci(index - 1) + ft_fibonacci(index - 2));    
}

int main (void)
{
    printf("%d", ft_fibonacci(6));
    return 0;
}