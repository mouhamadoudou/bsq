##
## EPITECH PROJECT, 2022
## Makefile 
## File description:
## Makefile
##

CC	=	gcc

SRC	=	./src/main.c \
		./src/window.c \
		./src/help.c \

OBJ	=	$(SRC:.c=.o)

NAME	=	my_rpg

CFLAGS	=	-iquote ./includes/ -Wextra -Wall

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC)	$(SRC) -o $(NAME) $(CFLAGS) -l csfml-window -l csfml-graphics \
	-l csfml-system -l csfml-audio -lm

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
