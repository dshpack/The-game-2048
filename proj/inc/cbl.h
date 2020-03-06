#ifndef CBL_H
# define CBL_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ncurses.h>
#include <unistd.h>
#include <time.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#define LEFT_OFFSET 17
#define DOWH_OFFSET 12
#define COLUMN_WIDTH 42
#define COLUMN_HEIGHT 9
#define ESC_KEY 27

typedef enum {
    LEFT,
    RIGHT,
    UP,
    DOWN
} Direction;

typedef struct      s_menu {
    int             x_pos;
    int             y_pos;
    int             key_pressed;
    int             marked;
    WINDOW          *menuwin;
}                   t_menu;

void    menu_maker();
void 	screen_set_up();
void	draw_header();
void	table_maker();
void	draw_one_number(int n, int y, int x, void (*oper[8])(int, int));
void	draw_numbers(int num, int pos_y, int pos_x, void (*oper[8])(int, int));
void	draw_number_zero(int y, int x);
void	draw_number_one(int y, int x);
void	draw_number_two(int y, int x);
void	draw_number_three(int y, int x);
void	draw_number_four(int y, int x);
void	draw_number_five(int y, int x);
void	draw_number_six(int y, int x);
void	draw_number_eight(int y, int x);
int 	nbr_len(int nbr);

int     **create_array();
void    print_array(int **arr, void (*oper[8])(int, int));
bool    check_merge(int ***arr, Direction d, int *SCORE);
int     **create_array();
int     find_pos(int arr[4]);
void    print_row(int *arr);
void    one_row_right(int *row_from, int *row_to, int *SCORE);
void    move_right(int **arr_from, int **arr_to, int *SCORE);
void    matrix_rotate(int **arr, int n);
void 	screen_set_up();
void	draw_header();
char	*mx_strnew(int size);

#endif
