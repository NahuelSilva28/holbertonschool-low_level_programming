#include <assert.h>
#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

int _abs(int);
int _atoi(char *s);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_memset(char *s, char b, unsigned int n);
char *_strcat(char *dest, char *src);
int _strcmp(char *s1, char *s2);
char *_strcpy(char *dest, char *src);
char *_strchr(char *s, char c);
int _strlen(char *s);
char *_strncat(char *dest, char *src, int n);
int _strncmp(char *s1, char *s2, unsigned int n);
char *_strncpy(char *dest, char *src, int n);
char *_strpbrk(char *s, char *accept);
unsigned int _strspn(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
int _isdigit(int c);
int _isalpha(int c);
int _islower(int c);
int _isupper(int c);
int _putchar(char c);
void cap_string(char *);
void jack_bauer(void);
void more_numbers(void);
int mul(int a, int b);
void print_alphabet(void);
void print_alphabet_x10(void);
void print_array(int *a, int n);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
void print_diagonal(int n);
void print_last_digit(int);
void print_line(int n);
void print_most_numbers(void);
void print_number(int n);
void print_numbers(void);
void print_rev(char *s);
void print_square(int size);
void print_to_98(int n);
void print_triangle(int size);
void puts2(char *str);
void puts_half(char *str);
int print_sign(int n);
void reset_to_98(int *n);
void reverse_array(int *a, int n);
void swap_int(int *a, int *b);
char *string_toupper(char *);
int _strlen_recursion(char *s);
void _puts_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int is_prime_number(int n);
int is_palindrome(char *s);
