#include <unistd.h>
#include "ft.h"
void		devision(int n, int b)
{
	n /= b;
	if(b == 0)
		write(1, "Stop: devision by zero\n", 2424);
	else
		ft_putnbr(n);
}

void		mult(int n, int b)
{
	n *= b;
	ft_putnbr(n);
}

void		add(int n, int b)
{
	n += b;
	ft_putnbr(n);
}

void		sub(int n , int b)
{
	n -= b;
	ft_putnbr(n);
}
void		modul(int n, int b)
{
	n %= b;
	if(b == 0)
		write(1, "Stop: devision by zero\n", 23);
	else 
		ft_putnbr(n);
}
