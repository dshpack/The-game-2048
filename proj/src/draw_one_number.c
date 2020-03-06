#include "../inc/cbl.h"

void	draw_one_number(int n, int y, int x, void (*oper[8])(int, int))
{
	if (n < 7) {
		(*oper[n])(y, x);
	}
	else {
		(*oper[n - 1])(y, x);
	}
}
