##
## EPITECH PROJECT, 2024
## Workshop-Modular-C
## File description:
## Makefile
##


SRC		=	src/main.c \
			src/ex06.c
			#src/ex01.c \
			#src/ex02.c \
			#src/ex03.c \
			#src/ex04.c \
			#src/ex05.c \

OBJ		=	$(SRC:.c=.o)

NAME	=	modular

CFLAGS	=	-Wall -Wextra -g -std=gnu17

all: $(NAME)

$(NAME): $(OBJ)
	gcc $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
