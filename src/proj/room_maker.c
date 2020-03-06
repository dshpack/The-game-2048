#include "header.h"

void	room_maker()
{
	char		up[25];
	char		down[25];
	char		*line = mx_strnew(170);

	for (int i = 0; i < 170; i++) {
		line[i] = '#';
	}
	mvprintw(10, 15, line);
	for (int i = 11; i < 50; i++) {
		mvprintw(i, 15, "##                                        ##                                        ##                                        ##                                        ##");
	}
	mvprintw(20, 15, line);
	mvprintw(30, 15, line);
	mvprintw(40, 15, line);
	mvprintw(50, 15, line);
    free(line);
}
