#include "../inc/minilibmx.h"

unsigned long mx_hex_to_nbr(const char *hex) {
	unsigned long res = 0;
	int i = 0;
	int base = 1;

	while (hex[i]) {
		i++;
	}
	for (i = i - 1; i >= 0; i--) {
		if (mx_isdigit(hex[i])) {
			res += (hex[i] - 48) * base;
		}
		else if (mx_isalpha(hex[i])) {
			if (mx_isupper(hex[i])) {
				res += (hex[i] - 55) * base;
			}
			else if (mx_islower(hex[i])) {
				res += (hex[i] - 87) * base;
			}
		}
		base *= 16;
	}
	return res;
}
