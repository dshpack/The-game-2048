#include "../inc/cbl.h"

void	draw_number_eight(int y, int x) 
{
	attron(COLOR_PAIR(3));
	mvprintw(y,     x, "         ");
	mvprintw(y + 1, x, "   $$$$  ");
	mvprintw(y + 2, x, "  $$  $$ ");
	mvprintw(y + 3, x, "   $$$$  ");
	mvprintw(y + 4, x, "  $$  $$ ");
	mvprintw(y + 5, x, "   $$$$  ");
	mvprintw(y + 6, x, "         ");
}
