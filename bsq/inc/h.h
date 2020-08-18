#ifndef H_H
# define H_H

#include <unistd.h>
#include <stdlib.h>

typedef struct		s_list
{
	struct s_list 	next;
	int				size;
	char 			*data;
}					t_list;



#endif
