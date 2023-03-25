#ifndef MAIN_H
#define MAIN_H

/* Standard Libraries */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Extra Libraries */
#include <unistd.h>
#include <time.h>
#include <math.h>
#include <assert.h>
#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <limits.h>
#include <locale.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>


/* Function prototypes */

/* Print Functions */
void _putchar(char c);
void print_alphabet(void);
void print_alphabet_x10(void);
void print_numbers(void);
void print_most_numbers(void);
void more_numbers(void);
void print_number(int n);
void print_line(int n);
void print_diagonal(int n);
void print_square(int size);
void print_triangle(int size);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);

/* String Functions */
int _strlen(char *s);
void _puts(char *str);
void print_rev(char *s);
void rev_string(char *s);
void puts2(char *str);
void puts_half(char *str);
void print_array(int *a, int n);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *string_toupper(char *);
char *cap_string(char *);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);

/* Math Functions */
int _abs(int);
int print_last_digit(int);
int print_sign(int n);
int add(int, int);
int _islower(int c);
int _isupper(int c);
int _isdigit(int c);
int mul(int a, int b);
void print_to_98(int n);

/* Memory Functions */
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);


/* Pointer Functions */
void reset_to_98(int *n);
void swap_int(int *a, int *b);
void set_string(char **s, char *to);

/* Grid Functions */
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);

#endif /* MAIN_H */
