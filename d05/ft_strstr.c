#include <stdio.h>
#include <unistd.h>
#include <string.h>

char    *ft_strstr(char *str, char *to_find)
{
    int n;
    int a;

    a = 0;
    n = 0;
    if (!to_find[0])
        return(str);
    while (str[n])
    {
        while (str[n + a] == to_find[a])
        {
            a++;
            if (to_find[a] == '\0')
                return (str + n);
        }
        n++;
        a = 0;
    }
    return(NULL);
}

int     main(void)
{
    char str[] = "something like this";
    char to_find[] = "e ";
    printf("%s", ft_strstr(str, to_find));
    return (0);
}