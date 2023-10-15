#ifndef VARIADIC_FUNC
#define VARIADIC_FUNC

/* writes a single character to the screen */
int _putchar(char c);

/* Returns the sum of all its parameters. */
int sum_them_all(const unsigned int n, ...);

/* Prints numbers, followed by a new line. */
void print_numbers(const char *separator, const unsigned int n, ...);

/* Prints strings, followed by a new line. */
void print_strings(const char *separator, const unsigned int n, ...);

/* Prints anything. */
void print_all(const char *const format, ...);

/* Returns the length of a string. */
int _strlen(const char *s);

#endif
