#ifndef MAIN_HEADER
#define MAIN_HEADER

#include <stddef.h>
#include <unistd.h>

/* Reads a text file and prints it to the POSIX standard output. */
ssize_t read_textfile(const char *filename, size_t letters);

/* Writes a character to the screen. */
int _putchar(char ch);

/* Creates a file. */
int create_file(const char *filename, char *text_content);

#endif
