#ifndef MY_HEADER_H
#define MY_HEADER_H

/* Prints a char to the screen. */
void _putchar(char ch);

/* Takes a pointer to an int and updates the value it points to to 98. */
void reset_to_98(int *n);

/* Swaps the values of two integers. */
void swap_int(int *a, int *b);

/* Returns the length of a string. */
int _strlen(char *s);

/* Prints a string, followed by a new line, to stdout */
void _puts(char *str);

/* Prints a string, in reverse, followed by a new line. */
void print_rev(char *s);

/* Reverses a string */
void rev_string(char *s);

/* Prints every other character of a string, starting with the first character */
void puts2(char *str);

/* Prints half of a string, followed by a new line */
void puts_half(char *str);

/* Prints n elements of an array of integers, followed by a new line. */
void print_array(int *a, int n);

#endif /* MAIN_H */

