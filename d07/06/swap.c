#include <stdio.h>
#include <unistd.h>
int main()
{	
	char c = 'a';
 	c = c >> 4 | c << 4;
	write(1, &c, 1);
	return(0);
}
