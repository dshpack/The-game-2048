#include "../inc/minilibmx.h"

static char *new_and_revese(char *hex_str, int i) {
	char *new = mx_strnew(i + 1);
	int j;

	for (j = 0; i > 0; j++) {
		new[j] = hex_str[i - 1];
		i--;
	}
	free(hex_str);
	return new;
}

char *mx_nbr_to_hex(unsigned long nbr) {
	char *hex_num = mx_strnew(100);
	int remainder;
	int i = 0;

	while (nbr > 0) {
		remainder = nbr % 16;
		if (remainder >= 0 && remainder < 10) {
			hex_num[i] = remainder + 48;
			i++;
		}
		else if (remainder >= 10 && remainder < 16) {
			hex_num[i] = remainder + 55;
			i++;
		}
		nbr = nbr / 16;
	}
	return new_and_revese(hex_num, i);
}
