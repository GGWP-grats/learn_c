NAME=bool

SRC= *.c

INC= ./

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SRC) -I $(INC) -o $(NAME)

clean:
	@rm *.o $(NAME)

re: clean $(NAME)
