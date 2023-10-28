#ifndef MAIN_HEADER
#define MAIN_HEADER

/* writes a single character to the screen */
int _putchar(char c);

/* Checks if the provided character is lowercase */
int _islower(int c);

/* Checks if the provided character is alphabetical */
int _isalpha(int c);

/* Returns the absolute value of the provided number */
int _abs(int n);

/* Checks if the provided character is uppercase */
int _isupper(int c);

/* Checks if the provided number is a digit */
int _isdigit(int c);

/* Returns the length of the provided string */
int _strlen(char *s);

/* Prints the provided string to the screen */
void _puts(char *s);

/* Copies the src string to the destination string */
char *_strcpy(char *dest, char *src);

/* Converts a string to an integer */
int _atoi(char *s);

/* Concatenate two strings */
char *_strcat(char *dest, char *src);

/* Concatenate two strings */
char *_strncat(char *dest, char *src, int n);

/* Copy a string */
char *_strncpy(char *dest, char *src, int n);

/* Compare two strings */
int _strcmp(char *s1, char *s2);

/* Fill memory with a constant byte */
char *_memset(char *s, char b, unsigned int n);

/* Copy memory area */
char *_memcpy(char *dest, char *src, unsigned int n);

/* Locate character in a string */
char *_strchr(char *s, char c);

/* Get length of a prefix substring */
unsigned int _strspn(char *s, char *accept);

/* Search a string for any of a set of bytes */
char *_strpbrk(char *s, char *accept);

/* Locate a substring */
char *_strstr(char *haystack, char *needle);

#endif /* MAIN_H */

