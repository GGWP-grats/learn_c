#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1 );
}

void    ft_putstr(char *str)
{
    while (*str != '\0')
    {
        ft_putchar(*str);
        str++;
    }
}

int main (void)
{
    ft_putstr("dfsdi\v\r\bfsdfsd");
    return 0;
}