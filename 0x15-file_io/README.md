# Description of files in  `0x15. C - File I/O` folder

0. **`0-read_textfile.c`** - a function that reads a text file and prints it to the `POSIX` standard output.
    - Prototype: `ssize_t read_textfile(const char *filename, size_t letters);`
    - where `letters` is the number of letters it should read and print.
    - Returns: the actual number of letters it could read and print, or `0` if;
        - the file can not be opened or read,
        - `filename` is `NULL`,
        - `write` fails or does not write the expected amount of bytes.

1. **`1-create_file.c`** - a function that creates a file.
    - Prototype: `int create_file(const char *filename, char *text_content);`
    - where `filename` is the name of the file to create and `text_content` is a `NULL` terminated string to write to the file.
    - Returns: `1` on success, `-1` on failure (file can not be created, file can not be written, `write` “fails”, etc…), or if filename is `NULL`.
    - The created file has permissions: `rw-------`. If the file already exists, no change to the permissions.
    - if the file already exists, it will be truncated.
    - if text_content is `NULL` an empty file will be created.

2. **`2-append_text_to_file.c`** - a function that appends text at the end of a file.
    - Prototype: `int append_text_to_file(const char *filename, char *text_content);`
    - where `filename` is the name of the file and `text_content` is the `NULL` terminated string to add at the end of the file.
    - Return: `1` on success and `-1` on failure or if `filename` is `NULL` or if the file does not exist or if the required permissions to write the file are lacking.
    - If the file does not exist, it will not be created.
    - If `text_content` is `NULL`, nothing is added to the file.

3. **`3-cp.c`** - a program that copies the content of a file to another file.
    - Usage: `cp file_from file_to`
    - if the number of argument is not the correct one, exits with code `97` and prints `Usage: cp file_from file_to`, followed by a new line, on the `POSIX` standard error.
    - if `file_to` already exists, it will be truncated.
    - if `file_from` does not exist, or if it can not be read, exits with code `98` and prints `Error: Can't read from file NAME_OF_THE_FILE`, followed by a new line, on the `POSIX` standard error.
        - where `NAME_OF_THE_FILE` is the first argument passed to your program.
    - if `file_to` can not be created or if `write` to `file_to` fails, exits with code `99` and prints `Error: Can't write to NAME_OF_THE_FILE`, followed by a new line, on the `POSIX` standard error.
        - where `NAME_OF_THE_FILE` is the second argument passed to your program.
    - if a file descriptor can not be closed, exits with code `100` and prints `Error: Can't close fd FD_VALUE`, followed by a new line, on the `POSIX` standard error.
        - where `FD_VALUE` is the value of the file descriptor.
    - Permissions of the created file: `rw-rw-r--`. If the file already exists, no change to the permissions.
    - At a time 1,024 bytes will be read from the `file_from`  using a buffer to make less system calls.

4. **`100-elf_header.c`** - a program that displays the information contained in the `ELF` header at the start of an `ELF` file.
    - Usage: `elf_header elf_filename`
    - Displayed information:
        - Magic
        - Class
        - Data
        - Version
        - OS/ABI
        - ABI Version
        - Type
        - Entry point address
    - Format: the same as `readelf -h` (version `2.26.1`)
    - If the file is not an `ELF` file, or on error, exits with status code `98` and displays a comprehensive error message to `stderr`.
    - The program uses `lseek` once and `read` a maximum of 2 times at runtime.
