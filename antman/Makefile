##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Compilation Makefile
##

LPATH	=	../lib/my/

SRC	=	./main.c\
		./lyrics/lyr_comp.c\
		./lyrics/print_lyrcomp.c\
		./ppm/ppm_comp.c\
		$(LPATH)get_content.c\
		$(LPATH)my_printf.c	\
		$(LPATH)my_printf_checks.c	\
		$(LPATH)my_putchar.c\
		$(LPATH)my_put_nbr.c\
		$(LPATH)my_putstr.c	\
		$(LPATH)my_strlen.c

OBJ = $(SRC:.c=.o)

CFLAGS	+= -Wall -I./include

CSFMLFLAGS	+= -lcsfml-system -lcsfml-window -lcsfml-graphics

NAME	=	antman

all: $(NAME)

$(NAME): $(OBJ)
	gcc $(CFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f clean $(OBJ)

fclean:	clean
	rm -f $(NAME)

re: fclean all
