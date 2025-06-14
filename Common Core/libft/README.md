# libft (125%)

This project is an implementation of a C library containing several useful functions that will be used throughout the 42 Common Core.

## 📝 Description

Libft is a library that includes reimplementations of several standard libc functions, as well as additional helper functions that will be useful throughout the course. This project helps us better understand how these functions work by **forbidding** the use of the originals.

## 🛠️ Implemented Functions

### Libc Functions
- `ft_isalpha` - Checks if a character is alphabetic  
- `ft_isdigit` - Checks if a character is a digit  
- `ft_isalnum` - Checks if a character is alphanumeric  
- `ft_isascii` - Checks if a character is ASCII  
- `ft_isprint` - Checks if a character is printable  
- `ft_strlen` - Calculates the length of a string  
- `ft_memset` - Fills memory with a constant byte  
- `ft_bzero` - Zeros out a block of memory  
- `ft_memcpy` - Copies memory area  
- `ft_memmove` - Copies memory area with overlap handling  
- `ft_strlcpy` - Safely copies strings  
- `ft_strlcat` - Safely concatenates strings  
- `ft_toupper` - Converts to uppercase  
- `ft_tolower` - Converts to lowercase  
- `ft_strchr` - Locates character in string  
- `ft_strrchr` - Locates last occurrence of a character in string  
- `ft_strncmp` - Compares strings  
- `ft_memchr` - Searches for a byte in memory  
- `ft_memcmp` - Compares memory areas  
- `ft_strnstr` - Locates a substring in a string  
- `ft_atoi` - Converts string to integer  
- `ft_calloc` - Allocates and zeroes memory  
- `ft_strdup` - Duplicates a string  

### Additional Functions
- `ft_substr` - Creates a substring  
- `ft_strjoin` - Concatenates two strings  
- `ft_strtrim` - Trims specific characters from start and end  
- `ft_split` - Splits a string into an array using a delimiter  
- `ft_itoa` - Converts an integer to string  
- `ft_strmapi` - Applies a function to each character of a string  
- `ft_striteri` - Applies a function to each character (with index)  
- `ft_putchar_fd` - Writes a character to a file descriptor  
- `ft_putstr_fd` - Writes a string to a file descriptor  
- `ft_putendl_fd` - Writes a string followed by a newline to a file descriptor  
- `ft_putnbr_fd` - Writes a number to a file descriptor  

### Bonus - Linked List Functions
- `ft_lstnew` - Creates a new node  
- `ft_lstadd_front` - Adds a node to the beginning  
- `ft_lstsize` - Counts the number of nodes  
- `ft_lstlast` - Returns the last node  
- `ft_lstadd_back` - Adds a node to the end  
- `ft_lstdelone` - Deletes a node's content  
- `ft_lstclear` - Clears and frees a list  
- `ft_lstiter` - Iterates the list applying a function  
- `ft_lstmap` - Creates a new list applying a function to each node  

## 🚀 How to Use

### 1. Clone the repository:
```bash
git clone [repository URL]
```

### 2. Compile the library:
```bash
make        # Compiles mandatory functions
make bonus  # Also compiles bonus functions
```

### 3.To use it in your project:
Include the header:
```bash
#include "libft.h"
```

Compile your project linking with libft:
```bash
cc your_program.c -L. -lft
```


## 🧪 Norms & Testing

- All functions are written according to the 42 Norm.
- Functions are leak-free.
- All functions have been thoroughly tested.
- All files **(.c/.h & Makefile)** must be in the root of your repository.

## 📄 Makefile

The Makefile contains the following rules:

- `make` - Compiles the library
- `make bonus` - Compiles the library including bonus functions
- `make clean` - Removes object files
- `make fclean` - Removes object files and the library
- `make re` - Recompiles the library

## 📝 Notes

- This project is part of the 42 Common Core curriculum.
- All functions were implemented from scratch.
- Usage of libc functions is strictly limited.

---
