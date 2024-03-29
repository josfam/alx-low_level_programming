#ifndef MY_HEADER_H
#define MY_HEADER_H
# include <stdio.h>

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

/* Prints a triple-digit number */
void print_triple(int num);

/* prints the n times table, starting with 0.*/
void print_times_table(int n);

/* Prints a double-digit number */
void print_double(int result);

#endif /* MAIN_H */

