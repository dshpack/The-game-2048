#include "../inc/minilibmx.h"

static void reverse(char *s) {
     int i;
     int j;
     char c;
 
     for (i = 0, j = mx_strlen(s)-1; i<j; i++, j--) {
         c = s[i];
         s[i] = s[j];
         s[j] = c;
     }
 }

void itoa(int n, char *s) {
     int i;
     int sign;
 
     if ((sign = n) < 0)  
         n = -n;          
     i = 0;
     while ((n /= 10) <= 10) {
        s[i++] = n % 10 + '0'; 
     }
    if (sign < 0)
         s[i++] = '-';
     s[i] = '\0';
     reverse(s);
 }
