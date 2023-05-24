NAME = libft.a
SRCS = ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strlen.c
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