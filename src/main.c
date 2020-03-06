#include "../inc/game.h"
#include "../inc/minilibmx.h"
#include <ncurses.h>
#include <string.h>

int 	screen_set_up() {
	initscr();
	//printw("Hello Program!");
	noecho();
	refresh();
	return 0;
}

void	draw_number_zero(int y, int x) {
	attron(COLOR_PAIR(3));
	mvprintw(y, x,     "         ");
	mvprintw(y + 1, x, "   $$$$  ");
	mvprintw(y + 2, x, "  $$  $$ ");
	mvprintw(y + 3, x, "  $$  $$ ");
	mvprintw(y + 4, x, "  $$  $$ ");
	mvprintw(y + 5, x, "   $$$$  ");
	mvprintw(y + 6, x, "         ");
}

void	draw_number_one(int y, int x) {
	attron(COLOR_PAIR(3));
	mvprintw(y, x,     "         ");
	mvprintw(y + 1, x, "     $$  ");
	mvprintw(y + 2, x, "   $$$$  ");
	mvprintw(y + 3, x, "     $$  ");
	mvprintw(y + 4, x, "     $$  ");
	mvprintw(y + 5, x, "     $$  ");
	mvprintw(y + 6, x, "         ");
}

void	draw_number_two(int y, int x) {
	attron(COLOR_PAIR(3));
	mvprintw(y, x,     "         ");
	mvprintw(y + 1, x, "   $$$$  ");
	mvprintw(y + 2, x, "  $$  $$ ");
	mvprintw(y + 3, x, "     $$  ");
	mvprintw(y + 4, x, "   $$    ");
	mvprintw(y + 5, x, "  $$$$$$ ");
	mvprintw(y + 6, x, "         ");
}

void	draw_number_three(int y, int x) {
	attron(COLOR_PAIR(3));
	mvprintw(y, x,     "         ");
	mvprintw(y + 1, x, "   $$$$  ");
	mvprintw(y + 2, x, "  $   $$ ");
	mvprintw(y + 3, x, "    $$$  ");
	mvprintw(y + 4, x, "  $   $$ ");
	mvprintw(y + 5, x, "   $$$$  ");
	mvprintw(y + 6, x, "         ");
}

void	draw_number_four(int y, int x) {
	attron(COLOR_PAIR(3));
	mvprintw(y, x,     "         ");
	mvprintw(y + 1, x, "  $$  $$ ");
	mvprintw(y + 2, x, "  $$  $$ ");
	mvprintw(y + 3, x, "  $$$$$$ ");
	mvprintw(y + 4, x, "      $$ ");
	mvprintw(y + 5, x, "      $$ ");
	mvprintw(y + 6, x, "         ");
}

void	draw_number_five(int y, int x) {
	attron(COLOR_PAIR(3));
	mvprintw(y, x,     "         ");
	mvprintw(y + 1, x, "  $$$$$  ");
	mvprintw(y + 2, x, "  $$     ");
	mvprintw(y + 3, x, "  $$$$$  ");
	mvprintw(y + 4, x, "      $$ ");
	mvprintw(y + 5, x, "  $$$$$  ");
	mvprintw(y + 6, x, "         ");
}

void	draw_number_six(int y, int x) {
	attron(COLOR_PAIR(3));
	mvprintw(y, x,     "         ");
	mvprintw(y + 1, x, "   $$$$  ");
	mvprintw(y + 2, x, "  $$     ");
	mvprintw(y + 3, x, "  $$$$$  ");
	mvprintw(y + 4, x, "  $$  $$ ");
	mvprintw(y + 5, x, "   $$$$  ");
	mvprintw(y + 6, x, "         ");
}

void	draw_number_eight(int y, int x) {
	attron(COLOR_PAIR(3));
	mvprintw(y, x,     "         ");
	mvprintw(y + 1, x, "   $$$$  ");
	mvprintw(y + 2, x, "  $$  $$ ");
	mvprintw(y + 3, x, "   $$$$  ");
	mvprintw(y + 4, x, "  $$  $$ ");
	mvprintw(y + 5, x, "   $$$$  ");
	mvprintw(y + 6, x, "         ");
}

int 	nbr_len(int nbr) {
	int 	len = 0;
	if (nbr == 0)
		return 1;
	while (nbr) {
		nbr /= 10;
		len++;
	}
	return len;
}

void	draw(int n, int y, int x, void (*oper[8])(int, int))
{
	if (n < 7) {
		(*oper[n])(y, x);
	}
	else {
		(*oper[n - 1])(y, x);
	}
}
void	draw_numbers(int num, int pos_y, int pos_x, void (*oper[8])(int, int))
{
	int y = DOWH_OFFSET + pos_y * 10;
	int len = 9 * nbr_len(num);
	int x = LEFT_OFFSET + COLUMN_WIDTH 
			* pos_x + (40 - len) / 2 + COLUMN_HEIGHT * (nbr_len(num) - 1);

	if (num == 0)
	{
		draw(num % 10, y, x, &(*oper));
	}
	while(num)
	{
		draw(num % 10, y, x, &(*oper));
		num /= 10;
		x -= 9;
	}
}

void	table_maker()
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
}



int main(void)
{
	void (*oper[8])(int, int) = {draw_number_zero, draw_number_one,
								draw_number_two, draw_number_three, 
								draw_number_four, draw_number_five, 
								draw_number_six, draw_number_eight};
    initscr();
    raw();
    start_color();
	init_pair(1, COLOR_BLACK, COLOR_CYAN);

    init_pair(2, COLOR_BLACK, COLOR_GREEN);
    init_pair(3, COLOR_BLACK, COLOR_YELLOW);
    
    curs_set(0);
    attron(COLOR_PAIR(1));
    draw_header();
    attron(COLOR_PAIR(2));
    table_maker();
    refresh();
	draw_numbers(15, 1, 1, &(*oper));
	draw_numbers(432, 0, 0, &(*oper));
	draw_numbers(888, 1, 0, &(*oper));
	draw_numbers(50, 2, 0, &(*oper));
	draw_numbers(166, 3, 2, &(*oper));
	draw_numbers(444, 3, 3, &(*oper));

	getch();
    endwin();
    return 0;
}
