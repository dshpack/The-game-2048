#include "../inc/minilibmx.h"

int mx_count_words(char *str, int c) {
	int i = 0;
	int words = 0;

	while (str[i])
	{
		if (str[i] == c){
			i++;
		}
		else if (str[i] != c) {
			while (str[i] != c) {
				i++;
				if (str[i] == c) {
					words++;
				}
				else if (str[i] == '\0') {
					return (words + 1);
				}
			}
		}
	}
	return words;
}
