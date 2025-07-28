# 📚 Libft

![Score Badge](https://img.shields.io/badge/Score-125%2F100-brightgreen)

## Overview

**Libft** is a foundational project from the 42 Common Core curriculum aimed at re-implementing a subset of the standard C library. The goal is to deepen understanding of fundamental C programming concepts by recreating commonly used functions such as `strlen`, `strcpy`, `memset`, and others. The library also includes utility functions for memory management, string manipulation, character checks, and linked list operations.

Completing this project will help build a solid base in C programming, preparing you for more advanced tasks.

## Skills Gained

- Proficient memory management in C
- Developing robust and efficient functions with edge-case handling
- Linked list creation, traversal, and manipulation
- Adhering to 42 coding standards and style guidelines
- Creating and managing Makefiles for efficient compilation


## Library Contents

The library is divided into three main parts:

### Core Libft Functions

| Function | Category | Description |
| :-- | :-- | :-- |
| `ft_isalpha` | Character Check | Checks if a character is alphabetic |
| `ft_isdigit` | Character Check | Checks if a character is numeric |
| `ft_isalnum` | Character Check | Checks if alphanumeric |
| `ft_isascii` | Character Check | Checks if character is ASCII |
| `ft_isprint` | Character Check | Checks if character is printable |
| `ft_strlen` | String | Returns string length |
| `ft_memset` | Memory | Fills memory with a constant byte |
| `ft_bzero` | Memory | Sets memory to zero |
| `ft_memcpy` | Memory | Copies memory area |
| `ft_memmove` | Memory | Copies memory with overlap handling |
| `ft_strlcpy` | String | Copies string with size limit |
| `ft_strlcat` | String | Concatenates strings with size limit |
| `ft_toupper` | Conversion | Converts character to uppercase |
| `ft_tolower` | Conversion | Converts character to lowercase |
| `ft_strchr` | String | Finds first occurrence of char |
| `ft_strrchr` | String | Finds last occurrence of char |
| `ft_strncmp` | String | Compares two strings up to n chars |
| `ft_memchr` | Memory | Scans memory for a byte |
| `ft_memcmp` | Memory | Compares memory areas |
| `ft_strnstr` | String | Locates a substring within a string |
| `ft_atoi` | Conversion | Converts string to integer |
| `ft_calloc` | Memory | Allocates and initializes memory |
| `ft_strdup` | String | Duplicates a string |

### Additional Utility Functions

| Function | Category | Description |
| :-- | :-- | :-- |
| `ft_substr` | String | Extracts a substring |
| `ft_strjoin` | String | Concatenates two strings |
| `ft_strtrim` | String | Trims characters from the beginning/end |
| `ft_split` | String | Splits string by a delimiter |
| `ft_itoa` | Conversion | Converts integer to string |
| `ft_strmapi` | String | Applies a function to each char (with index) |
| `ft_striteri` | String | Applies a function to each char in place |
| `ft_putchar_fd` | Output | Writes a character to a file descriptor |
| `ft_putstr_fd` | Output | Writes a string to a file descriptor |
| `ft_putendl_fd` | Output | Writes a string followed by a newline |
| `ft_putnbr_fd` | Output | Writes an integer to a file descriptor |

### Bonus: Linked List Functions

| Function | Category | Description |
| :-- | :-- | :-- |
| `ft_lstnew` | List | Creates a new list node |
| `ft_lstadd_front` | List | Adds a node at the beginning of the list |
| `ft_lstsize` | List | Returns the size of the list |
| `ft_lstlast` | List | Returns the last node |
| `ft_lstadd_back` | List | Adds a node at the end |
| `ft_lstdelone` | List | Deletes a single node |
| `ft_lstclear` | List | Deletes and frees all nodes in the list |
| `ft_lstiter` | List | Applies a function to each node |
| `ft_lstmap` | List | Applies a function to nodes and creates a new list |

## Testing

You can verify your implementations using popular third-party testing tools or create your own test cases:

- [libft-unit-test](https://github.com/alelievr/libft-unit-test)
- [libftTester](https://github.com/Tripouille/libftTester)
- [francinette](https://github.com/xicodomingues/francinette)


## Compilation Instructions

Use the provided Makefile targets to build and manage the library:

```bash
# Compile mandatory functions only
make

# Compile library including bonus (linked list) functions
make bonus

# Remove object files (.o)
make clean

# Remove object files and static library
make fclean

# Clean and compile from scratch
make re
```

Both `make` and `make bonus` produce the static library `libft.a`. The bonus build includes additional linked list functions.

## Project Structure

```
libft/
├── ft_*.c          # Source files containing function implementations
├── libft.h         # Header file with function declarations and structs
├── Makefile        # Build instructions
└── libft.a         # Compiled static library (after successful build)
```


## Resources

- [42 Cursus Official Repository](https://github.com/JaeSeoKim/42-cursus) — full project descriptions
- [Linux man pages](https://man7.org/linux/man-pages/) for reference on C standard functions
- Norminette — 42 code style checker tool


## Final Notes

This project is fundamental for all subsequent 42 projects involving C programming. Mastering these basic library functions will sharpen your skills and prepare you for more complex challenges such as `get_next_line` and `ft_printf`.

Happy coding! 🚀
