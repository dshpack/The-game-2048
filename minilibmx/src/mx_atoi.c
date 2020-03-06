#include "../inc/minilibmx.h"

int mx_atoi(const char *str) {
	int	i = 0;
	unsigned long int res = 0;
	int sign = 1;

	while (mx_isspace(str[i])) {
		i++;
	}
	if (str[i] == '-') {
		sign = -1;
		i++;
	}
	while (str[i] && mx_isdigit(str[i])) {
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (int)(res * sign);
}
