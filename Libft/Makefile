NAME = libft.a
SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)
#INC = -I./includes
CC = cc
CFLAG = -Wall -Wextra -Werror

all:	$(NAME)

$(NAME) : $(OBJS)
		ar rc $(NAME) $(OBJS)

.c.o: 
		$(CC) $(CFLAG) $(INC) -c $< -o $@

clean:
		rm -f $(OBJS)

fclean:	clean
		rm -f $(NAME)

re:	fclean	all

.PHONY : all clean fclean re