#include "../inc/minilibmx.h"

static char *create_sentence(char **words, char **sentence) {
	char *temp;
	int i;

	for (i = 1; words[i]; i++) {
		if (words[i + 1] == NULL) {
			temp = mx_strjoin(*sentence, words[i]);
		}
		else {
			temp = mx_strjoin(mx_strjoin(*sentence, words[i]), " ");
		}
		if (temp) {
			mx_strdel(sentence);
			*sentence = mx_strdup(temp);
			mx_strdel(&temp);
		}
	}
	if (words[i]) {
		mx_strdel(sentence);
	}
	return *sentence;
}

char *mx_concat_words(char **words) {
	char *sentence;

	if (!*words) {
		return NULL;
	}
	sentence = mx_strjoin(mx_strdup(words[0]), " ");
	return create_sentence(words, &sentence);
}
