#ifndef MY_HEADER_H
#define MY_HEADER_H

/* prints a char to the screen*/
void _putchar(char ch);

/* prints the lowercase alphabet from a-z */
void print_alphabet(void);

/* prints the alphabet in lowercase 10 times */
void print_alphabet_x10(void);

/* checks whether a character is lowercase */
int _islower(int c);

/* checks for an alphabetical character */
int _isalpha(int c);

/* prints the sign of a number */
int print_sign(int n);

/* Computes the absoulute value of an integer */
int _abs(int);

/* Prints the last digit of a number */
int print_last_digit(int);

/* Prints every minute of the day of Jack Bauer */
void jack_bauer(void);

/* Prints the 9 times table starting from 0 */
void times_table(void);

/* Adds two integers and returns the result */
int add(int, int);

/* Prints all natural numbers from n to 98  */
void print_to_98(int n);

/* Checks for uppercase character */
int _isupper(int c);

/* checks for a digit (0 through 9) */
int _isdigit(int c);

/* Multiplies two integers */
int mul(int a, int b);

/* prints the numbers, from 0 to 9 */
void print_numbers(void);

/* prints the numbers, from 0 to 9, except for 2 and 4 */
void print_most_numbers(void);

/* prints the numbers, from 0 to 14 ten times */
void more_numbers(void);

/* Draws a straight line in the terminal */
void print_line(int n);

/* Draws a diagonal line on the terminal */
void print_diagonal(int n);

/* Prints a square */
void print_square(int size);

/* Prints a triangle */
void print_triangle(int size);

#endif /* MAIN_H */

