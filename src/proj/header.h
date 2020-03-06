#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ncurses.h>
#include <time.h>

typedef enum {
    LEFT,
    RIGHT,
    UP,
    DOWN
} Direction;

int     **create_array();
void    print_array(int **arr);
bool    check_merge(int ***arr, Direction d, int *SCORE);
int     **create_array();
int     find_pos(int arr[4]);
void    print_array(int **arr);
void    print_row(int *arr);
void     one_row_right(int *row_from, int *row_to, int *SCORE);
void    move_right(int **arr_from, int **arr_to, int *SCORE);
void    matrix_rotate(int **arr, int n);
void 	screen_set_up();
void	draw_header();
void	draw_number_zero(int y, int x);
void	draw_number_one(int y, int x);
void	draw_number_two(int y, int x);
void	draw_number_three(int y, int x);
void	draw_number_four(int y, int x);
void	draw_number_five(int y, int x);
void	draw_number_six(int y, int x);
void	draw_number_eight(int y, int x);
int 	nbr_len(int nbr);
void	draw_one_number(int n, int y, int x);
void	draw_numbers(int num, int pos_y, int pos_x);
void	room_maker();
char	*mx_strnew(int size);