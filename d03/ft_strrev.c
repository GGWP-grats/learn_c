#include <stdio.h>
#include <unistd.h>

void        ft_putchar(char c)
{
    write(1, &c, 1);
}
char        *ft_strrev(char *str)
{
    int i;
    int b;
    char tmp;

    b = 0;
    i = 0;
    while (str[i] != '\0')
        i++;
    while ((i - 1) > b)
    {
        tmp = str[i];
        str[i--] = str[b];
        str[b++] = tmp;
//  give    i--;
//  equal   str[i--] = str[b];
//  result  str[b++] = tmp;
//          b++; 
    }
    return (str);
}
int main (void)
{
    char str[] = "ABCDE";
    ft_strrev(str);
    return 0;
}
