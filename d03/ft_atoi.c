#include <stdio.h>
#include <unistd.h>

int     ft_atoi(char *str)
{
    int sign;
    int nbr;

    sign = 1;
    nbr = 0;
    while (*str >= 9 && *str <= 13 )
        str++;
    if (*str == '+')
        str++;    
    if (*str == '-')
        {
            sign = -1;
            str++;
        }    
    while (*str <= '9' && *str >= '0')
    {
        nbr = nbr * 10 + *str - '0';
        str++;
    } 
    return(nbr * sign);   
}

int main(void)
{
    char str[] = "\t\n\v\f\r-5434";
    printf("%d", ft_atoi(str));
    return 0;
}