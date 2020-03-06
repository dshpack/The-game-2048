#include "../inc/minilibmx.h"

static void	mx_intminquit(void)
{
	mx_printchar('-');
	mx_printchar('2');
	mx_printchar('1');
	mx_printchar('4');
	mx_printchar('7');
	mx_printchar('4');
	mx_printchar('8');
	mx_printchar('3');
	mx_printchar('6');
	mx_printchar('4');
	mx_printchar('8');
}

void		mx_printint(int n)
{
	if (n == -2147483648){
		mx_intminquit();
		return;
	}
	if (n < 0)
	{
		mx_printchar('-');
		n *= -1;
	}
	if (n > 9)
		mx_printint(n / 10);
	mx_printchar((n % 10) + 48);
}
