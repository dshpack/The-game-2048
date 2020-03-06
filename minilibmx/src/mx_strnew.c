#include "../inc/minilibmx.h"

char *mx_strnew(const int size) {
	char *str = (char *)malloc((size + 1) * sizeof(char));
	int i;
	if (!str) {
		return NULL;
	}
	for (i = 0; i <= size; i++) {
		str[i] = '\0';
	}
	return str;
}
