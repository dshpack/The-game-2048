#include "../inc/minilibmx.h"

char	*mx_strtrim(char *str)
{
	char *end;
	char *trim_str;

	if (!str)
		return str;
	while ((mx_isspace(*str))) {
		str++;
	}
	end = str + mx_strlen(str) - 1;
	while ((mx_isspace(*end))) {
		end--;
	}
	*++end = '\0';
	trim_str = mx_strnew(mx_strlen(str));
	return mx_strncpy(trim_str, str, end - str + 1);
}
