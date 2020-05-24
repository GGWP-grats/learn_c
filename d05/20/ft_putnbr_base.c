#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnb_base(int num, char* base)
{
    int base_len;
    int final_num[100];
    int new_len;
    
    base_len = 0;
    while (base[base_len])
        base_len++;
    if (num < 0)
    {
        write(1, "-", 1);
        num = -num;
    }
    new_len = 0;
    while(num)
    {
        final_num[new_len] = num % base_len;
        num /= base_len; 
        new_len++;  
    }     
    while(new_len >= 0)
        ft_putchar(base[final_num[new_len--]]);
}

int main ()
{
    ft_putnb_base(6, "91");
    return(0);
}
