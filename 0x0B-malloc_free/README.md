# 0x0B. C - malloc, free

This directory contains projects and exercises focused on dynamic memory allocation in C using `malloc` and `free`.

## Learning Objectives
- Understand the concept of dynamic memory allocation.
- Learn how to use `malloc` and `free` to manage memory.
- Avoid common memory management pitfalls like memory leaks and dangling pointers.

## Files
| Filename | Description |
|----------|-------------|
| `0-create_array.c` | Function that creates an array of chars, initialized with a specific char. |
| `1-strdup.c` | Function that returns a pointer to a newly allocated space in memory, containing a copy of a string. |
| `2-str_concat.c` | Function that concatenates two strings into a newly allocated memory space. |
| `3-alloc_grid.c` | Function that returns a pointer to a 2D array of integers. |
| `4-free_grid.c` | Function that frees a 2D grid previously created by your program. |
| `100-argstostr.c` | Function that concatenates all the arguments of your program into a single string. |
| `101-strtow.c` | Function that splits a string into words. |

## Usage
Each file contains a specific function. Compile the files using `gcc` and test them with your own main programs or the provided test cases.

Example:
```bash
gcc -Wall -Werror -Wextra -pedantic <filename.c> -o <output_name>
./<output_name>
```

## Author
This project is part of the ALX Software Engineering program.