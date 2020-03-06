#include <stdlib.h>

char *mx_nbr_to_hex(unsigned long nbr);
char *mx_strjoin(char const *s1, char const *s2);

char *mx_get_address(void *p) {
	unsigned long num = (unsigned long)&p;

	return mx_strjoin("0x", mx_nbr_to_hex(num));
}
