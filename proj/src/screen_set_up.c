#include "../inc/cbl.h"

void 	screen_set_up()
{
	initscr();
	noecho();
	refresh();
	raw();
    start_color();
	init_pair(1, COLOR_BLACK, COLOR_CYAN);
    init_pair(2, COLOR_BLACK, COLOR_GREEN);
    init_pair(3, COLOR_BLUE, COLOR_YELLOW);
    init_pair(4, COLOR_YELLOW, COLOR_RED);
    init_pair(5, COLOR_BLACK, COLOR_BLACK);  
    init_pair(6, COLOR_WHITE, COLOR_RED);
    init_pair(7, COLOR_BLUE, COLOR_GREEN); 
}
