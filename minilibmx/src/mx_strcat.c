#include "../inc/minilibmx.h"

char *mx_strcat(char *s1, const char *s2) {
	int i = 0;
	int j = mx_strlen(s1);

	while (s2[i]) {
		s1[j++] = s2[i++];
	}
	s1[j] = '\0';
	return s1;
}
