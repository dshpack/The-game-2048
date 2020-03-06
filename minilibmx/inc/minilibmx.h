#ifndef MINILIBMX_H
# define MINILIBMX_H

#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>
#include <string.h>

int mx_atoi(const char *str);
int mx_strcmp(const char *s1, const char *s2);
int mx_tolower(int c);
int mx_toupper(int c);
int *mx_copy_int_arr(const int *src, int size);
int mx_strlen(const char *s);
int mx_strncmp(const char *s1, const char *s2, int n);

bool mx_isdigit(int c);
bool mx_islower(int c);
bool mx_isspace(char c);
bool mx_isupper(int c);
bool mx_isalpha(int c);

void mx_print_arr_int(const int *arr, int size);
void mx_printchar(char c);
void mx_printint(int n);
void mx_printstr(const char *s);
void mx_sort_arr_int(int *arr, int size);
void mx_strdel(char **str);
void mx_strdel(char **str);
void itoa(int n, char *s);

char *mx_strcat(char *s1, const char *s2);
char *mx_strchr(const char *s, int c);
char *mx_strcpy(char *dst, const char *src);
char *mx_strdup(const char *str);
char *mx_strjoin(char const *s1, char const *s2);
char *mx_strncpy(char *dst, const char *src, int len);
char *mx_strnew(const int size);
char *mx_strstr(const char *s1, const char *s2);
char *mx_strtrim(char *str);
char *mx_nbr_to_hex(unsigned long nbr);
char *mx_get_address(void *p);

unsigned long mx_hex_to_nbr(const char *hex);

#endif
