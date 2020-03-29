#include <stdio.h>
#include <unistd.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;
    
    i = 0;
    while ((i < n) && src[i])
    {
        dest[i] = src [i];
        i++;
    }
    while (i < n)
        dest[i++] = '\0';
    return (dest);
}
int     main(void)
{
    char dest[15];
    char src[] = "foobar";
    printf("%s", ft_strncpy(dest, src, 15));
    return(0);
}
