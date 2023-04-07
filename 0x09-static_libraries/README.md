# Description fo files in `0x09-static_libraries` directory

1 **`libmy.a`** -  static library containing all the functions listed below:
    - `int _putchar(char c);`
    - `int_islower(int c);`
    - `int _isalpha(int c);`
    - `int_abs(int n);`
    - `int _isupper(int c);`
    - `int_isdigit(int c);`
    - `int _strlen(char *s);`
    - `void_puts(char *s);`
    - `char*_strcpy(char *dest, char *src);`
    - `int_atoi(char *s);`
    - `char*_strcat(char *dest, char *src);`
    - `char *_strncat(char *dest, char*src, int n);`
    - `char *_strncpy(char*dest, char *src, int n);`
    - `int _strcmp(char*s1, char *s2);`
    - `char*_memset(char *s, char b, unsigned int n);`
    - `char *_memcpy(char *dest, char*src, unsigned int n);`
    - `char *_strchr(char*s, char c);`
    - `unsigned int _strspn(char *s, char *accept);`
    - `char *_strpbrk(char *s, char*accept);`
    - `char *_strstr(char*haystack, char *needle);`

2 **`create_static_lib.sh`** - a script that creates a static library called `liball.a` from all the `.c` files that are in the current directory.
