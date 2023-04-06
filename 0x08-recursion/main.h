#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int _sqrt_helper(int n, int guess);
int is_prime_number(int n);
int is_prime_helper(int n, int divisor);
int is_palindrome(char *s);
int null_index(char *s, int n);
int is_palindrome_helper(char *s, int start, int end);
int wildcmp(char *s1, char *s2);
int wildcmp_helper(char *s1, char *s2, int i1, int i2, int len1, int len2);
int _strchr(char *s, char c);
int next_char(char *s, int n);

#endif
