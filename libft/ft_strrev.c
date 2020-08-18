#include <unistd.h>

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
    }
    return (str);
}
