<h1 align="center">
  Libft
</h1>

<p align="center">
  <img src="https://img.shields.io/badge/Score-125%2F100-success">
  <img src="https://img.shields.io/badge/Language-C-informational">
  <img src="https://img.shields.io/github/repo-size/viceda-s/42-cursus?label=Repo%20Size">
  <img src="https://img.shields.io/github/last-commit/viceda-s/42-cursus?label=Last%20Commit">
</p>

---

## 📖 Overview

This project is part of the **42 Common Core** curriculum. The goal is to create a personal **C standard library** by re-coding commonly used standard functions such as `strlen`, `strcpy`, `memset` and others — as well as utility functions for memory management, string manipulation, character checks, linked list handling, etc.

This project is a fundamental exercise to better understand how these low-level functions work and to build a strong foundation in **C programming**.

---

## 🧠 Skills Gained

- Deep understanding of memory management in C
- Creating robust functions with edge case handling
- Linked list operations (creation, iteration, modification)
- Reinforcement of coding style and modularity
- Familiarity with Makefiles and compilation

---

## 🛠️ Functions Implemented

The library is split into parts:

### 🛠️ Libft Function Reference

| **Function**     | **Category**         | **Description** |
|------------------|----------------------|-----------------|
| `ft_isalpha`     | Char check           | Checks if character is alphabetic |
| `ft_isdigit`     | Char check           | Checks if character is a digit |
| `ft_isalnum`     | Char check           | Checks if character is alphanumeric |
| `ft_isascii`     | Char check           | Checks if character is ASCII |
| `ft_isprint`     | Char check           | Checks if character is printable |
| `ft_strlen`      | String               | Returns the length of a string |
| `ft_memset`      | Memory               | Fills memory with a constant byte |
| `ft_bzero`       | Memory               | Sets memory to zero |
| `ft_memcpy`      | Memory               | Copies memory area |
| `ft_memmove`     | Memory               | Copies memory area with overlap handling |
| `ft_strlcpy`     | String               | Copies string with size limit |
| `ft_strlcat`     | String               | Concatenates strings with size limit |
| `ft_toupper`     | Conversion           | Converts character to uppercase |
| `ft_tolower`     | Conversion           | Converts character to lowercase |
| `ft_strchr`      | String               | Finds character in string |
| `ft_strrchr`     | String               | Finds last occurrence of character |
| `ft_strncmp`     | String               | Compares strings up to n characters |
| `ft_memchr`      | Memory               | Scans memory for a byte |
| `ft_memcmp`      | Memory               | Compares memory areas |
| `ft_strnstr`     | String               | Locates a substring in a string |
| `ft_atoi`        | Conversion           | Converts string to integer |
| `ft_calloc`      | Memory               | Allocates and zeroes memory |
| `ft_strdup`      | String               | Duplicates a string |


### ➕ Additional Functions

| **Function**     | **Category**         | **Description** |
|------------------|----------------------|-----------------|
| `ft_substr`      | String               | Extracts a substring from a string |
| `ft_strjoin`     | String               | Concatenates two strings |
| `ft_strtrim`     | String               | Trims characters from both ends |
| `ft_split`       | String               | Splits string into substrings by delimiter |
| `ft_itoa`        | Conversion           | Converts integer to string |
| `ft_strmapi`     | String               | Applies function to each char (with index) |
| `ft_striteri`    | String               | Applies function to each char (in-place) |
| `ft_putchar_fd`  | Output               | Writes character to file descriptor |
| `ft_putstr_fd`   | Output               | Writes string to file descriptor |
| `ft_putendl_fd`  | Output               | Writes string + newline to file descriptor |
| `ft_putnbr_fd`   | Output               | Writes number to file descriptor |


### 🌀 Bonus - Linked List Functions

| **Function**     | **Category**         | **Description** |
|------------------|----------------------|-----------------|
| `ft_lstnew`      | List                 | Creates new list node |
| `ft_lstadd_front`| List                 | Adds node at the beginning |
| `ft_lstsize`     | List                 | Returns size of list |
| `ft_lstlast`     | List                 | Returns last node |
| `ft_lstadd_back` | List                 | Adds node at the end |
| `ft_lstdelone`   | List                 | Deletes a node |
| `ft_lstclear`    | List                 | Deletes and frees all nodes |
| `ft_lstiter`     | List                 | Applies function to each node |
| `ft_lstmap`      | List                 | Applies function to each node, returns new list |  

---

## 🧪 Testing

You can test the functions using any of the following testers:

- [libft-unit-test](https://github.com/alelievr/libft-unit-test)
- [libftTester](https://github.com/Tripouille/libftTester)
- [francinette](https://github.com/xicodomingues/francinette)
- Or write your own test cases!

---

## 🧾 Compilation

To compile the library, run:

```bash
make
```

This will compile only the **mandatory** part of the library and create `libft.a`.

To compile **including the bonus part** (linked list functions), use:

```bash
make bonus
```

Both targets will generate the same static library `libft.a`, but the `bonus` target ensures that the extra functions (from `bonus/` or conditionally compiled sections) are included.

To clean up object files:

```bash
make clean    # Removes object (.o) files
make fclean   # Removes object files and libft.a
```

To recompile from scratch:

```bash
make re
```

---

## 📁 Project Structure

```
libft/
├── ft_*.c         # Function implementations
├── libft.h        # Function declarations
├── Makefile       # Build instructions
└── libft.a        # Compiled static library (after make)
```

---

## 📚 Resources

- [42 Cursus PDF](https://github.com/JaeSeoKim/42-cursus) (for full project descriptions)
- [man pages](https://man7.org/linux/man-pages/) for C functions
- The Norminette code style checker

---

## 🏁 Final Notes

This project is foundational to all future 42 projects in C. Mastering it ensures you're ready for more complex challenges like `get_next_line`, `ft_printf` and beyond.

Happy coding!
