#ifndef MY_HEADER_H
#define MY_HEADER_H

/* Writes a character to screen. */
void _putchar(char ch);

/* Creates an array of chars, and initializes it with a specific char. */
char *create_array(unsigned int size, char c);

/* Returns a pointer to a newly allocated space in memory, which contains a
copy of the string given as a parameter. */
char *_strdup(char *str);

/* Returns the length of a string. */
int _strlen(char *s);

#endif /* MAIN_H */
