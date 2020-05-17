#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
typedef float (*fp)(double, double);

float		plus(double a, double b)
{
	a += b;
	return a;
}

float		mult(double a, double b)
{
	a *= b;
	return a;		
}

int		main(int argc, char **argv)
{
	double a = atof(argv[1]);
	double b = atof(argv[2]);
	fp func[1];
	func[0] = plus;
	func[1] = mult;
	if (argc)
		printf("plus = %f \nmult = %f", func[1](a, b), func[0](a, b));
	return 0;
}
