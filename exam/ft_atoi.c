#include <stdio.h>
#include <unistd.h>

int	ft_atoi(const char *str)
{
    int negative = 1;
    int a = 0;
    while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
    while (*str == '-' || *str == '+')    
    {
        negative = -1;
        str++;
    }
    while (*str >= '0' && *str <= '9')
     {
        a = a * 10 + *str - '0';
        str++;
     }
    return(negative * a);
}

int     main(void)
{
    const char b[]= "\n\n\v\f\r\t-+21474836";
    printf("%d", ft_atoi(b));
    return (0);
}

