# __0x18-dynamic_libraries__

## libdynamic.so

a shared library containing the following functions.
```
int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
```

## 1-create_dynamic_lib.sh

a script that creates a dynamic library called `liball.so` from all the `.c` files that are in the current directory.

## 100-operations.so

a dynamic library that contains `C` functions that can be called from Python.
```
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
int mod(int a, int b);
```

## 101-make_me_win.sh

a shell script that will generate numbers for a an `ELF` [`gm`](https://github.com/alx-tools/0x18.c)
