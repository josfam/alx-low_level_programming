#ifndef MY_HEADER_H
#define MY_HEADER_H

/* Prints a char to the screen. */
void _putchar(char ch);

/* Concatenates two strings. */
char *_strcat(char *dest, char *src);

/* Concatenates at most n bytes from source to destination string. */
char *_strncat(char *dest, char *src, int n);

/* Copies at most n bytes from source to destination string, akin to strncpy */
char *_strncpy(char *dest, char *src, int n);

/* compares two strings */
int _strcmp(char *s1, char *s2);

/* Reverses the content of an array of integers. */
void reverse_array(int *a, int n);

#endif /* MAIN_H */

