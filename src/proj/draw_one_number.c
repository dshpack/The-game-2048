#include "header.h"

void	draw_one_number(int n, int y, int x)
{
	if (n == 0) {
		draw_number_zero(y, x);
	}
	if (n == 1) {
		draw_number_one(y, x);
	}
	if (n == 2) {
		draw_number_two(y, x);
	}
	if (n == 3) {
		draw_number_three(y, x);
	}
	if (n == 4) {
		draw_number_four(y, x);
	}
	if (n == 5) {
		draw_number_five(y, x);
	}
	if (n == 6) {
		draw_number_six(y, x);
	}
	if (n == 8) {
		draw_number_eight(y, x);
	}
}
