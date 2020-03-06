#include "header.h"

int     find_pos(int arr[4])
{
    int i = 3;
    
    while (i >= 0 && arr[i] == 0) {
        i--;
    }
    if (i < 0) {
        i = 0;
    }
    return i;
}
