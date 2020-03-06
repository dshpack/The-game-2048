#include "../inc/cbl.h"

void    move_right(int **arr_from, int **arr_to, int *SCORE)
{
    for (int i = 0; i < 4; i++) {
        one_row_right(arr_from[i], arr_to[i], SCORE);
    }
}
