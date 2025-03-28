# 0x10. Variadic Functions

This directory contains projects and tasks related to variadic functions in C programming. Variadic functions are functions that accept a variable number of arguments, providing flexibility in their usage.

## Learning Objectives
- Understand what variadic functions are.
- Learn how to use `va_start`, `va_arg`, and `va_end` macros.
- Explore the use cases of variadic functions.
- Implement practical examples of variadic functions.

## Files
| Filename | Description |
|----------|-------------|
| `0-sum_them_all.c` | Function that returns the sum of all its parameters. |
| `1-print_numbers.c` | Function that prints numbers, followed by a new line. |
| `2-print_strings.c` | Function that prints strings, followed by a new line. |
| `3-print_all.c` | Function that prints anything based on a format string. |
| `variadic_functions.h` | Header file containing function prototypes and necessary includes. |

## Usage
1. Clone this repository.
2. Compile the C files using `gcc` with the `-std=gnu89` flag.
3. Run the compiled programs to test the functionality of variadic functions.

## Example
```c
#include "variadic_functions.h"

int main(void)
{
	print_numbers(", ", 4, 0, 98, -1024, 402);
	return (0);
}
```

## Author
This project is part of the ALX Low-Level Programming curriculum.