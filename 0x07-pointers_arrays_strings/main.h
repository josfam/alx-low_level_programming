#ifndef MY_HEADER_H
#define MY_HEADER_H

/* Prints a char to the screen. */
void _putchar(char ch);

/* Fills memory with a constant byte. */
char *_memset(char *s, char b, unsigned int n);

/* Copies memory area */
char *_memcpy(char *dest, char *src, unsigned int n);

/* Locates a character in a string. */
char *_strchr(char *s, char c);

/* Gets the length of the prefix substring. */
unsigned int _strspn(char *s, char *accept);

#endif /* MAIN_H */

