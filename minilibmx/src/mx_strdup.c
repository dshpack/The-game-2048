#include "../inc/minilibmx.h"

char	*mx_strdup(const char *str)
{
	char	*str_copy;

	str_copy = mx_strnew(mx_strlen(str + 1));
	if (str_copy == NULL) {
		return NULL;
	}
	return mx_strcpy(str_copy, str);
}
