#include "header.h"

void     one_row_right(int *row_from, int *row_to, int *SCORE)
{
    int     k = 3;
    int     i = 3;
    bool    merge = false;
    
    i = find_pos(row_from);
    row_to[k--] = row_from[i];
    while (--i >= 0) {
        if (row_from[i] != 0) {
            if (!merge) {
                if (row_to[k + 1] == row_from[i]) {
                    row_to[k + 1] *= 2;
                    *SCORE += row_to[k + 1];
                    merge = true;
                }
                else {
                    row_to[k--] = row_from[i];
                }
            }
            else {
                merge = false;
                row_to[k--] = row_from[i];
            }
        }
    }
}
