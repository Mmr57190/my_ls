##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

SRC =	 $(wildcard ./src/*.c)	\
		main.c

OBJ		=	$(SRC:.c=.o)

NAME	=	my_ls

CFLAGS	=	-I./include/ -g

LDFLAGS	=	-L./lib/ -lmy

all:	$(NAME)

$(NAME):	$(OBJ) lib/libmy.a
		$(CC) -o $(NAME) $(OBJ) $(LDFLAGS) $(CFLAGS)

clean:
		$(RM) ./lib/my/*~
		$(RM) *~
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)
		$(RM) ./lib/libmy.all

re:		fclean all

lib/libmy.a:
		$(MAKE) -C ./lib/my/

.Phony: all clean fclean re