#ifndef MALLOC_FREE_HEADER
#define MALLOC_FREE_HEADER

/* Writes a character to screen. */
void _putchar(char ch);

/* Creates an array of chars, and initializes it with a specific char. */
char *create_array(unsigned int size, char c);

/* Returns a pointer to a newly allocated space in memory, which contains a
copy of the string given as a parameter. */
char *_strdup(char *str);

/* Returns the length of a string. */
int _strlen(char *s);

/* Concatenates two strings. */
char *str_concat(char *s1, char *s2);

/* Returns a pointer to a 2 dimensional array of integers. */
int **alloc_grid(int width, int height);

/* Frees a 2 dimensional grid previously created by the alloc_grid function. */
void free_grid(int **grid, int height);

/* Concatenates all the arguments of your program. */
char *argstostr(int ac, char **av);

#endif
