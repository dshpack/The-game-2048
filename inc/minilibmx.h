#ifndef MINILIBMX_H
# define MINILIBMX_H

#include <stdbool.h>
#include <unistd.h>
#include <stdlib.h>

int		mx_atoi(char *str);
int		mx_strlen(char *str);
bool	mx_isdigit(int c);
bool	mx_isspace(char c);
void	mx_printchar(char c);
void	mx_printint(int n);
void	mx_printstr(char *str);
char	*mx_strnew(size_t size);
char	*mx_strcpy(char *dst, const char *src);
char	*mx_strchr(char *str, int c);
int		mx_strcmp(const char *s1, const char *s2);


#endif
