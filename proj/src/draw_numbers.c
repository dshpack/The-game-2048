#include "../inc/cbl.h"

void	draw_numbers(int num, int pos_y, int pos_x, void (*oper[8])(int, int))
{
	int y = DOWH_OFFSET + pos_y * 10;
	int len = 9 * nbr_len(num);
	int x = LEFT_OFFSET + COLUMN_WIDTH 
			* pos_x + (40 - len) / 2 + COLUMN_HEIGHT * (nbr_len(num) - 1); 
	while(num)
	{
		draw_one_number(num % 10, y, x, &(*oper));
		num /= 10;
		x -= 9;
	}
}
