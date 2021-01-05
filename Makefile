##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Compilation Makefile
##

all:
	$(MAKE) -C ./antman/
	$(MAKE) -C ./giantman/

clean:
	$(MAKE) -C ./antman/ clean
	$(MAKE) -C ./giantman/ clean

fclean:
	$(MAKE) -C ./antman/ fclean
	$(MAKE) -C ./giantman/ fclean

re: fclean all
