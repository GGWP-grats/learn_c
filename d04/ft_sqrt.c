#include <stdio.h>

int     ft_sqrt(int nb)
{
    int num;
    
    num = 1; 
    while ((num * num) < nb)
      num++;
    if ((num * num) == nb)
        return(num);
    return 0;
}

int main(void)
{
    printf("%d", ft_sqrt(1));
    return(0);
}