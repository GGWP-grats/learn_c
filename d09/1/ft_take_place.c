#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void	ft_takes_place(int hour)
{
	if(hour < 12)
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 AM  AND %d.00 AM\n", hour, hour + 1);
	else if(hour == 12)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 12.00 AM  AND 1.00 PM\n");
	else if(hour > 12 && 24 > hour)
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 PM  AND %d.00 PM\n", hour%12, hour%12 + 1);
	else if (hour == 24)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 12.00 PM  AND 1.00 AM\n");
	else
		printf("FUCJK");
}
int main(int ac, char **av) 
{
	(void)ac;
	ft_takes_place(atoi(av[1]));
	return(1);
}
