NAME=cbl
CC=clang
CFLAGS=-std=c11 -Wall -Werror -Wextra -Wpedantic
HEAD=-Iinc
INCLUDES=proj/inc/game.h
LINC=proj/inc/minilibmx.h

SRC:= proj/src/main.c proj/src/check_merge.c proj/src/draw_number_eight.c proj/src/draw_number_one.c \
		proj/src/draw_number_two.c proj/src/draw_one_number.c proj/src/one_row_right.c proj/src/screen_set_up.c \
		proj/src/create_array.c proj/src/draw_number_five.c proj/src/draw_number_six.c proj/src/draw_number_zero.c \
		proj/src/find_pos.c proj/src/move_right.c proj/src/print_array.c proj/src/table_maker.c proj/src/draw_header.c \
		proj/src/draw_number_four.c proj/src/draw_number_three.c proj/src/draw_numbers.c proj/src/nbr_len.c proj/src/print_row.c proj/src/menu.c
OBJ:= main.o check_merge.o draw_number_eight.o draw_number_one.o draw_number_two.o draw_one_number.o one_row_right.o screen_set_up.o \
		create_array.o draw_number_five.o draw_number_six.o draw_number_zero.o find_pos.o move_right.o print_array.o table_maker.o draw_header.o \
		draw_number_four.o draw_number_three.o draw_numbers.o nbr_len.o print_row.o

all: $(NAME)

$(NAME): $(SRC)
	make -C minilibmx/
	$(CC) $(СFLAGS) -o $(NAME) -lncurses $(SRC) minilibmx.a 

install: all

clean:
		rm -f $(OBJ)
		rm -f $(NAME)
		rm -f $(LIBNAME)

uninstall: clean

reinstall: uninstall install
