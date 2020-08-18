NAME = bsq

SRC = src/*.c

LIB = libft/*.c

CC = gcc -Wall -Wextra -Werror *.o

CO = gcc -Wall -Wextra -Werror -c $(SRC) $(LIB)

all: $(NAME)

CC:
	$(CC) -o $(NAME)
CO:
	$(CO)

$(NAME): CO CC

clean:
	rm *.o
fclean: clean
	rm -rf $(NAME)
re: fclean all
