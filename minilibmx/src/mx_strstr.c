#include <string.h>

char *mx_strchr(const char *s, int c);
int mx_strlen(const char *s);
int mx_strncmp(const char *s1, const char *s2, int n);

char *mx_strstr(const char *s1, const char *s2) {
	int i = 0;
	int j = 0;

	if (mx_strlen(s2) == 0) {
		return (char *)s1;
	}
	if (mx_strlen(s2) == 1) {
		return mx_strchr(s1, (int)s2[j]);
	}
	while (s1[i]) {
		if (s1[i] == s2[j]) {
			j++;
			if (s2[j] == '\0') {
				return (char *)&s1[i - j + 1];
			}
		}
		i++;
		if (s1[i] != s2[j] && s1[i]) {
			i = i - j + 1;
			j = 0;
		}
	}
	return NULL;
}
