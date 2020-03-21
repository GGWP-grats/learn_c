#include <stdio.h>

int ft_recursive_power(int nbr, int power)
{
    if (!power)
        return (1);
   // if (power == 1)
     //   return (nbr);    
    if (power < 0 || !nbr)
        return (0);
  //  if (power > 1)
  //       nbr = ft_recursive_power(nbr, power - 1) * nbr;
    return(ft_recursive_power(nbr, power - 1) * nbr);
}

int main (void)
{
    printf("%d", ft_recursive_power(2, 10));
    return(0);
}