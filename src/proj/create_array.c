#include "header.h"

int     **create_array()
{
    int **array = (int**)malloc(sizeof(int*) * 4);

    for (int i = 0; i < 4; i++) {
        array[i] = (int*)malloc(sizeof(int) * 4);
        for (int j = 0; j < 4; j++)
            array[i][j] = 0;
    }
    return array;
}
