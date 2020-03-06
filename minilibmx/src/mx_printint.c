#include "../inc/minilibmx.h"

void mx_printint(int n) {
	int num = n;
	int temp;
	int sign = 0;

	if (n == -2147483648) {
		mx_printchar('-');
		mx_printint(214748364);
		mx_printchar('8');
		return ;
	}
	if (n < 0) {
		num = -n;
		sign = -1;
	}
	if (num >= 10) {
		temp = num % 10;
		mx_printint((n / 10));
		mx_printint(temp);
	}
	if (num < 10) {
		if (sign == -1)
			mx_printchar('-');
		mx_printchar(num + 48);
	}
}
