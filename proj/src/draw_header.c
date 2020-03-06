#include "../inc/cbl.h"

void	draw_header()
{
	attron(COLOR_PAIR(1));
	mvprintw(2, 81,   "                                 ");
	mvprintw(3, 81,  "  ####    ####   ##  ##   ####   ");
	mvprintw(4, 81,  " ##  ##  ##  ##  ##  ##  ##  ##  ");
	mvprintw(5, 81,  "    ##   ##  ##  ######   ####   ");
	mvprintw(6, 81,  "  ##     ##  ##      ##  ##  ##  ");
	mvprintw(7, 81,  " ######   ####       ##   ####   ");
	mvprintw(8, 81,  "                                 ");
}
