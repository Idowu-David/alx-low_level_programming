# 0x0C. More malloc, free

This directory contains projects and exercises focused on dynamic memory allocation in C using `malloc`, `free`, and `realloc`.

## Learning Objectives
- Understand how to use
`malloc` to allocate memory dynamically.  
- Use `free` to deallocate memory and avoid memory leaks.  
- Understand the use of `realloc` to resize previously allocated memory blocks.  
- Learn best practices for managing dynamic memory in C programs.
## Project Files

| Filename              | Description                                                                 |
|-----------------------|-----------------------------------------------------------------------------|
| `0-malloc_checked.c`  | Allocates memory using `malloc` and exits with a status value of `98` if it fails. |
| `1-string_nconcat.c`  | Concatenates two strings using a specified number of bytes from the second string. |
| `2-calloc.c`          | Implements a function that allocates memory for an array using `malloc`.   |
| `3-array_range.c`     | Creates an array of integers containing values from a specified range.     |
| `100-realloc.c`       | Reallocates a memory block using `malloc` and `free`.                      |
| `101-mul.c`           | Multiplies two positive numbers represented as strings.                   |

## Usage

To compile and run any of the files, use the following commands:

```bash
gcc -Wall -Werror -Wextra -pedantic <filename.c> -o <output_name>
./<output_name>
```

Replace `<filename.c>` with the desired file and `<output_name>` with the name of the executable.