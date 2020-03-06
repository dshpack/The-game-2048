#include "../inc/minilibmx.h"

int	mx_strlen(char *str) {
	int		ln = 0;

	while (str && str[ln]) {
		ln++;
	}
	return ln;
}
