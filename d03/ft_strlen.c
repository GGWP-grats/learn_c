#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1 );
}

void    ft_strlen(char *str)
{
    int cntr;

    cntr = 0;
    while (*str != '\0')
    {
        str++;
        cntr++;
    }
    printf("%d", cntr);    
}

int main (void)
{
    ft_strlen("1234567812333333331t");
    return 0;
}