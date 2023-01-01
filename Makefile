##
## BSQ PROJECT, 2022
## makefile
## File description:
## make
##

CC      =       gcc
CCFLAGS =       -Wextra -Wall -Werror
CFLAGS  =		-g

SRC     =       main.c                                  \
				src/init_struct.c						\
				src/count.c								\
				src/lib/my_putchar.c					\
				src/lib/my_put_nbr.c					\
				src/lib/my_putstr.c						\
				src/lib/my_strlen.c						\
				src/lib/my_getnbr.c						\

OBJ     =       $(SRC:.c=.o)

NAME    =       bsq

all     :       $(NAME)

$(NAME) :       $(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(CCFLAGS) -g3

clean   :
	$(RM)   $(OBJ)
	$(RM) *~
	cd src && $(RM) *~
	cd src/lib && $(RM) *~
	cd includes && $(RM) *~
fclean  :       clean
	$(RM) $(NAME)

re      :       fclean all
