#include <unistd.h>

void	rush(int x, int y)
{
	int i;

	iy = 1;
	ix = 1;
	while(ix <= x)
	{	
		if (ix == 1 || ix == x)
			while (iy <= y)
			{
				if (iy == 1 || iy == y )
					write (1 , o, 1);
				else 
					write (1, -, 1);
				iy++;
			}
		else
			while(iy <= y)
			{
				if (iy == 1 || iy == y )
					write (1 , |, 1);
				else 
					write(1, ' ', 1)
			}
		iy = 1;
		ix++;
	}
}
