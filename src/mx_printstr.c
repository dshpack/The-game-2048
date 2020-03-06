#include "../inc/minilibmx.h"

void	mx_printstr(char *str){
	int i = 0;

	while (str[i]){
		mx_printchar(str[i++]);
	}
}
