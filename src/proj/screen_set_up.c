#include "header.h"

void 	screen_set_up()
{
	initscr();
	noecho();
	refresh();
	raw();
    start_color();
	init_pair(1, COLOR_BLACK, COLOR_CYAN);
    init_pair(2, COLOR_BLACK, COLOR_GREEN);
    init_pair(3, COLOR_BLACK, COLOR_YELLOW);
}
