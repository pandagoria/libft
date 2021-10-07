NAME = libft.a

all: $(NAME)

$(NAME): *.o
	ar rc $(NAME) *.o

*.o:
	gcc -Wall -Werror -Wextra -c *.c

clean:
	rm *.o

fclean:
	rm $(NAME)

re:
	clean all *.o
