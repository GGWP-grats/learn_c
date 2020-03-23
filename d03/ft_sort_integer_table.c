#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char d[] = "\t\n\v\f\r\t\n\v\f\r542";
    int n = atoi(d);
    printf("%d", n);
    return 0;
}