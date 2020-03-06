#include "../inc/minilibmx.h"

void mx_print_arr_int(const int *arr, int size) {
	int col;

	for (col = 0; col < size; col++) {
		mx_printint(arr[col]);
		mx_printchar('\n');
	}
}
