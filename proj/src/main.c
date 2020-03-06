#include "../inc/cbl.h"
#include "../../minilibmx/inc/minilibmx.h"
#include <ncurses.h>
#include <string.h>

void    draw_game_over(int score) {
    int x = 46;
    int y = 20;

    attron(COLOR_PAIR(6));
    clear();
    mvprintw(y, x, "   >===>          >>       >=>       >=> >=======>\
                  >===>      >=>         >=> >=======> >======>    ");
    mvprintw(y + 1, x, " >>    >=>       >>=>      >> >=>   >>=> >=>\
                      >=>    >=>    >=>       >=>  >=>       >=>    >=>  ");
    mvprintw(y + 2, x, ">=>             >> >=>     >=> >=> > >=> >=>\
                    >=>        >=>   >=>     >=>   >=>       >=>    >=>  ");
    mvprintw(y + 3, x, ">=>            >=>  >=>    >=>  >=>  >=> >=====>\
                >=>        >=>    >=>   >=>    >=====>   >> >==>     ");
    mvprintw(y + 4, x, ">=>   >===>   >=====>>=>   >=>   >>  >=> >=>\
                    >=>        >=>     >=> >=>     >=>       >=>  >=>    ");
    mvprintw(y + 5, x, " >=>    >>   >=>      >=>  >=>       >=> >=>\
                      >=>     >=>       >===>      >=>       >=>    >=>  ");
    mvprintw(y + 6, x, "  >====>    >=>        >=> >=>       >=> >=======>\
                  >===>            >=>       >=======> >=>      >=>");
    mvprintw(y + 8, x + 48, "Your SCORE only: %d", score);
}

void    draw_game_victory(int score) {
    int x = 66;
    int y = 20;

    attron(COLOR_PAIR(7));
    clear();
    mvprintw(y, x,     ">=>      >=>     >===>      >=>     >=>\
         >=>        >=> >=> >==>    >=>");
    mvprintw(y + 1, x, " >=>    >=>    >=>    >=>   >=>     >=>\
         >=>        >=> >=> >> >=>  >=>");
    mvprintw(y + 2, x, "  >=> >=>    >=>        >=> >=>     >=>\
         >=>   >>   >=> >=> >=> >=> >=>");
    mvprintw(y + 3, x, "    >=>      >=>        >=> >=>     >=>\
         >=>  >=>   >=> >=> >=>  >=>>=>");
    mvprintw(y + 4, x, "    >=>      >=>        >=> >=>     >=>\
         >=> >> >=> >=> >=> >=>   > >=>");
    mvprintw(y + 5, x, "    >=>        >=>     >=>  >=>     >=>\
         >> >>    >===> >=> >=>    >>=>");
    mvprintw(y + 6, x, "    >=>          >===>        >====>\
            >=>        >=> >=> >=>     >=>");
    mvprintw(y + 8, x + 23, "Congratulations your SCORE is: %d", score);
}

void    draw_context(int **arr, int SCORE)
{
    void (*oper[8])(int, int) = {draw_number_zero, draw_number_one,
                                        draw_number_two, draw_number_three, 
                                        draw_number_four, draw_number_five, 
                                        draw_number_six, draw_number_eight};
    attron(COLOR_PAIR(1));
    draw_header();
    attron(COLOR_PAIR(2));
    table_maker();
    refresh();
    print_array(arr, &(*oper));
    print_array(arr, &(*oper));
    attron(COLOR_PAIR(4));
    mvprintw(8, 15, "SCORE = %d", SCORE);
    mvprintw(53, 15, "To play, press buttons \"w\" \"a\" \"s\" \"d\"");
    mvprintw(54, 15, "Quit \"ESC\"");
}

void    game_proces(int SCORE, int **arr) {
    char ch;
    bool end_game = true;

    while ((ch = getch()) != (char)ESC_KEY && end_game) {
            if (ch == 'd' || ch == 'D') {
                end_game = check_merge(&arr, RIGHT, &SCORE);
            }
            if (ch == 'w' || ch == 'W'){
                end_game = check_merge(&arr, UP, &SCORE);
            }
            if (ch == 'a' || ch == 'A'){
                end_game = check_merge(&arr, LEFT, &SCORE);
            }
            if (ch == 's' || ch == 'S'){
                end_game = check_merge(&arr, DOWN, &SCORE);
            }
            draw_context(arr, SCORE);
            (!end_game && SCORE < 2056) ? draw_game_over(SCORE) : 0;
            (!end_game && SCORE >= 2056) ? draw_game_victory(SCORE) : 0;
    }
}

int main(void) {
    srand(time(NULL));
    int SCORE = 0;
    int **arr = create_array();    
    
    arr[1][1] = 2;
    screen_set_up();
    clear();
    menu_maker();        
    clear(); 
    draw_context(arr, SCORE);
    game_proces(SCORE, arr);
    endwin();
    return 0;
}
