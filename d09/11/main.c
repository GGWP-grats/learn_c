#include "ft_perso.h"
#include <string.h>
#include <stdio.h>

int main(void)
{
	t_presto donnie;
	
	donnie.name = strdup("Donnie");
	donnie.life = 100.0;
	donnie.age = 24;
	donnie.profession = SAVE_AUSTIN_POWERS;
	printf ("Name - %s\nlife - %f\nage - %d\nprofession - %d\n", donnie.name, donnie.life, donnie.age, donnie.profession);
	return(0);
}
