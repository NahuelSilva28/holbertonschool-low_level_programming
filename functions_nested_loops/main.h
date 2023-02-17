#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * _putchar - Writes the character c to stdout.
 * @c: The character to print.
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);
/**
 * _islower - Checks if a character is lowercase.
 * @c: The character to check.
 *
 * Return: 1 if c is lowercase, 0 otherwise.
 */
int _islower(int c);
int _isalpha(int c);
int print_sign(int n);
int _abs(int);
int print_last_digit(int);
int add(int, int);
void print_to_98(int n);
/**
 * print_alphabet - Prints the lowercase alphabet.
 */
void print_alphabet(void);
void print_alphabet_x10(void);
void jack_bauer(void);
void times_table(void);
void print_times_table(int n);
