#include <unistd.h>
#include <stdio.h>

char       *ft_strcpy(char *dest, char *src)
{   
    int i;

    i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = src[i];
    return(dest);
}

int main(void)
{   
    char dest[10];
    char src[10] = "jarajaraj";
    printf("\n%s", ft_strcpy(dest, src));
    return(0);
}