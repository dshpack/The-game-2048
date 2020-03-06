#include "../inc/cbl.h"

void    print_row(int *arr)
{
    printf("row = ");
    for (int i = 0; i < 4; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
