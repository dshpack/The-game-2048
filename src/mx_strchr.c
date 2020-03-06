#include "../inc/minilibmx.h"

char	*mx_strchr(char *str, int c)
{
	int		i;

	i = -1;
	while (++i < (int)mx_strlen(str) + 1)
		if (*(str + i) == (char)c)
			return ((char *)str + i);
	return (NULL);
}
