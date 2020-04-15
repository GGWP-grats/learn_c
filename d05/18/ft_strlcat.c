#include <stdio.h>
#include <string.h>

/*unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	return (size);
}
*/
int main(int argc, char **argv)
{
	if (argc > 1)
		printf("strlcat is: %i", strlcat(argv[1], argv[2]));
	return(0);
}
