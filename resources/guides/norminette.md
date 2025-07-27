# 🧰 Norminette Guide

**The Norminette is the 42 school’s C style checker. It enforces code formatting, naming conventions, and programming rules to ensure readability, maintainability, and consistency across all projects.**

---

## 📄 File and Project Structure

- Each project must include ONLY authorized files and folders.
- All files must be named using only lowercase letters, numbers, and underscores.
- Each source file (.c) and header (.h) must start with the correct header comment (header of 42).

---

## 📝 General Rules

- File maximum length: **no more than 25 lines for header**, **no more than 80 columns per line**, **no more than 3 consecutive blank lines**.
- Each function: **maximum 25 lines** (excluding the opening and closing brackets).
- Each function: **maximum 5 variables** (excluding loop counters).
- Each function: **maximum 4 parameters**.
- Forbidden: `for`, `switch`, `case`, variable-length arrays, and function pointers outside of allowed contexts.
- Only one instruction per line.

---

## 🪄 Naming Conventions

- **Functions:** Lowercase, words separated by underscores (e.g., `ft_print_list`)
- **Variables:** Lowercase, words separated by underscores (e.g., `index_tmp`)
- **Macros and Constants:** UPPERCASE_WITH_UNDERSCORES
- **Types:** `t_mytype`

---

## 🚦 Indentation & Spacing

- Use **four spaces per indentation level**. Never use TAB characters.
- No lines longer than **80 characters**.
- Avoid trailing whitespaces.
- Only one empty line between functions.

---

## ✅ Function Declaration and Definitions

- Function name, parameters, return type, and opening bracket:
```
int	ft_add_numbers(int a, int b)
{
	// ...
}
```
- The closing bracket of the function must be on its own line.

---

## 💡 Examples

**Correct Variable Declaration:**
```
int	count;
char	*str;
```

**Correct If-Else Structure:**
```
if (condition)
{
	// code
}
else
{
	// code
}
```

---

## 👮 Common Mistakes

- Missing or malformed 42 header
- Too many lines in a function
- Using forbidden keywords (like `for`, `switch`)
- Function names or variables that don't match the naming convention
- Lines longer than 80 columns
- Tabs instead of spaces

---

## 🔗 Useful Resources

- [Official Norminette Documentation](https://github.com/42School/norminette)
- [Norminette Online Checker](https://norminette.42network.org/)
- CLI:  
```
pip install norminette
norminette <directory_or_files>
```

---

**Stick to these rules for every C file in your project. Run Norminette before every push to avoid bonus corrections!**
