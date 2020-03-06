#include "../inc/cbl.h"
#include "../../minilibmx/inc/minilibmx.h"

void        menu_decoration(t_menu *menu, char *name) {
    raw();
    noecho();
    keypad(stdscr, TRUE);
    curs_set(0);    
    getmaxyx(stdscr, menu->y_pos, menu->x_pos);
    attron(COLOR_PAIR(4));
    mvprintw(13, (menu->x_pos - mx_strlen("Make your choise!!!")) / 2, "Make your choise!!!");
    attroff(COLOR_PAIR(4));
    move(30, (menu->x_pos - mx_strlen(name))/2);
    attron(COLOR_PAIR(1));
    printw(name);
    attroff(COLOR_PAIR(1));
    refresh();
    menu->menuwin = newwin(4, menu->x_pos - 12, 15, 6);
    box(menu->menuwin, 0, 0);
    refresh();
    wrefresh(menu->menuwin);
    keypad(menu->menuwin, TRUE);
}

void        draw_menu(t_menu *menu, char *name, char **options) {
    while(1) {
        for(int i = 0; i < 2; i++) {
            if(i == menu->marked)
                wattron(menu->menuwin, A_REVERSE);
            mvwprintw(menu->menuwin, i+1, 
                (menu->x_pos - mx_strlen(name)) / 2, options[i]);
            if (i == menu->marked)
                wattroff(menu->menuwin, A_REVERSE);
        }
        menu->key_pressed = wgetch(menu->menuwin);
        if(menu->key_pressed == (int)'\n') {
            break;
        }
        else if(menu->key_pressed == KEY_UP) { 
            menu->marked = --menu->marked < 0 ? 0 : menu->marked;
        }
        else if(menu->key_pressed == KEY_DOWN) { 
            menu->marked = ++menu->marked > 1 ? 1 : menu->marked;
        }
    }    
}

void        menu_maker() {
    t_menu      menu;
    char        name[] = "- - - The game 2048 - - -";
    char        *options[] = {"Start the GAME", "EXIT",};

    menu_decoration(&menu, name);
    menu.marked = 0;
    draw_menu(&menu, name, options);
    if (menu.marked == 1) {
        endwin();
        exit(0);
    }
}
