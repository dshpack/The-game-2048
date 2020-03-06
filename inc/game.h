#ifndef GAME_H
# define GAME_H

#include <unistd.h>
#include <stdlib.h>

#define LEFT_OFFSET 17
#define DOWH_OFFSET 12
#define COLUMN_WIDTH 42
#define COLUMN_HEIGHT 9

typedef struct 		s_player {
    int 			x_pos;
    int 			y_pos;
    int 			health;
}               	t_hero;

void	draw_header();

#endif
