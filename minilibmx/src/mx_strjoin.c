#include "../inc/minilibmx.h"

char	*mx_strjoin(char const *s1, char const *s2)
{
	char	*str;

	if (!s1 && !s2) {
		return 0;
	}
	if (s1 && !s2) {
		return mx_strdup(s1);
	}
	else if (!s1 && s2) {
		return mx_strdup(s2);
	}
	str = mx_strnew((mx_strlen(s1) + mx_strlen(s2) + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	mx_strcat(mx_strcpy(str, s1), s2);
	return str;
}
