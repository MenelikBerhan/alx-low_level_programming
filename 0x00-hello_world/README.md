# Description of files in folder 0x00-hello_world directory

- **`0-preprocessor`** - runs a C file name saved in the variable `$CFILE` through the preprocessor
and save the result into another file named `c`.
- **`1-compiler`** - a shell script that compiles but dose not link a `c` file named in
the variable `CFILE`. It outputs the result into a file with the same name but extension `.o`.
- **`2-assembler`** - a shell script that generates the assembly line code for a `c` file named in
the variable `CFILE`. It outputs the result into a file with the same name but extension `.s`.
- **`3-name`** - a shell script that compiles a `c` file named in the variable `CFILE` and creates
an excutabel file named `cisfun`.
- **`4-puts.c`** - a `c` program that prints exactly `"Programming is like building a multilingual puzzle"`, followed by a new line using `puts` function. The program returns a value of `0`.
- **`5-printf.c`** - a `c` program that prints exactly `with proper grammar, but the outcome is a piece of art,`, followed by a new line using `printf` function. The program returns a value of `0` and should compile without warning when using the `-Wall gcc` option.
- **`6-size.c`** - a `c` program that prints the size of different types on the computer it is compiled and run
on. Warnings might appear and the program returns `0`.
- **`100-intel`** - a shell script that generates the assembly code (Intel syntax) of a `C` code amed in `CFILE` variable and save it in an output file with the same name and extention of `.s`.
- **`101-quote.c`** - prints exactly `and that piece of art is useful" - Dora Korpar, 2015-10-19`, followed by a new line, to the standard error and return `1`.
