NAME = libft.a
SRCS = ft_isalpha.c 
OBJS = $(SRCS:.c=.o)
INC = -I./includes
CC = gcc
CFLAG = -Wall -Wextra -Werror

all: $(NAME)

$(NAME) : $(OBJS)
	ar rc $(NAME) $(OBJS)

.c.o:
	$(CC) $(CFLAG) $(INC) -c $< -o $@

clean:
	rm -r $(OBJS)

fclean: clean
	rm -r $(NAME)

re: fclean	all

.PHONY : all clean fclean re