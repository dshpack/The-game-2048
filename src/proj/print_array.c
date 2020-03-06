#include "header.h"

void    print_array(int **arr)
{
    int i;
    int j;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            draw_numbers(arr[i][j], i, j);
        }
    }
}
