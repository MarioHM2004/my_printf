##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## compiles your libmy
##

SRC  =          lib/my/all_flags.c \
				lib/my/all_flag_2.c \
				lib/my/my_nbrlen.c \
				lib/my/my_printf.c \
				lib/my/my_put_nbr.c \
				lib/my/my_putchar.c \
				lib/my/my_putstr.c \
				lib/my/my_revstr.c \
				lib/my/my_strcpy.c \
				lib/my/my_strlen.c \
				lib/my/utils_functions.c \

DOTO  =			all_flags.o \
				all_flag_2.o \
				my_nbrlen.o \
				my_printf.o \
				my_put_nbr.o \
				my_putchar.o \
				my_putstr.o \
				my_revstr.o \
				my_strcpy.o \
				my_strlen.o \
				utils_functions.o \

OBJ  =          $(SRC.c=.o)

NAME =          libmy

CFLAGS = -I include/ -L -lmy

all:    $(NAME)

$(NAME):	$(OBJ)
	gcc -c $(SRC)
	ar rc $(NAME).a $(DOTO)
	make clean

exec:
	./$(NAME)

clean:
	rm -f $(DOTO)

fclean:
	make clean
	rm -f $(NAME).a

re : fclean all

tests_run:
	gcc -o unit_test tests/unit_test.c libmy.a $(FLAGS) -lcriterion --coverage
	./unit_test
