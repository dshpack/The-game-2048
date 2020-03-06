#include "../inc/cbl.h"

void    matrix_rotate(int **arr, int n)
{
    int tmp;
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < 2; i++) {
            for (int j = i; j < 3 - i; j++) {
                tmp = arr[i][j];
                arr[i][j] = arr[3 - j][i];
                arr[3 - j][i] = arr[3 - i][3 - j];
                arr[3 - i][3 - j]= arr[j][3 - i];
                arr[j][3 - i] = tmp;
            }
        }   
    }
}

void    generate_random_int(int **arr)
{
    int n, i = rand() % 4, j = rand() % 4, q = rand() % 11;

    if (q < 8) {
        n = 2;
    }
    else {
        n = 4;
    }
    while (arr[i][j] != 0) {
        i = rand() % 4;
        j = rand() % 4;
    }
    arr[i][j] = n;
    
}

bool    compare_matrix(int **a, int **b)
{
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (a[i][j] != b[i][j]) {
                return false;
            }
        }
    }
    return true;
}

bool    check_matrix_full(int **arr)
{
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (arr[i][j] == 0) {
                return false;
            }
        }
    }
    return true;
}

bool    check_merge(int ***arr, Direction d, int *SCORE) {
    int     **new = create_array();

    if (d == RIGHT) {
        move_right(*arr, new, SCORE);
    }
    else if (d == UP) {
        matrix_rotate(*arr, 1);
        move_right(*arr, new, SCORE);
        matrix_rotate(new, 3);
        matrix_rotate(*arr, 3);
    }
    else if (d == LEFT) {
        matrix_rotate(*arr, 2);
        move_right(*arr, new, SCORE);
        matrix_rotate(new, 2);
        matrix_rotate(*arr, 2);
    }
    else if (d == DOWN) {
        matrix_rotate(*arr, 3);
        move_right(*arr, new, SCORE);
        matrix_rotate(new, 1);
        matrix_rotate(*arr, 2);
    }
    if (check_matrix_full(new)) {
        return false;
    }
    if (!compare_matrix(*arr, new)) {
        generate_random_int(new);
    }
    for (int i = 0; i < 4; i++) {
        free((*arr)[i]);
    }
    *arr = new;
    return true;
}
