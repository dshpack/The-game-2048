#include "../inc/minilibmx.h"

char *mx_strchr(const char *s, int c) {
    int	i = 0;

	while (s[i]) {
		if (s[i] == (char)c) {
			return (char *)&s[i];
		}
		i++;
	}
	if (s[i] == (char)c) {
		return (char *)&s[i];
	}
	return NULL;
}
