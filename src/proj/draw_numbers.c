#include "header.h"

void	draw_numbers(int num, int pos_y, int pos_x)
{
	int y = 12 + pos_y * 10;
	int len = 9 * nbr_len(num);
	int x = 17 + 42 * pos_x + (40 - len) / 2 + 9 * (nbr_len(num) - 1); 
	if (num == 0)
	{
		draw_one_number(num % 10, y, x);
	}
	while(num)
	{
		draw_one_number(num % 10, y, x);
		num /= 10;
		x -= 9;
	}
}
