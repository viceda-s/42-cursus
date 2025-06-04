#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <limits.h>

// Função auxiliar para limpar a memória da lista
static void del(void *content)
{
    free(content);
}

void test_str_functions(void)
{
    printf("\n=== Testing String Functions ===\n");

    // Test ft_strlen with different cases
    printf("ft_strlen(\"\") = %zu (should be 0)\n", ft_strlen(""));
    printf("ft_strlen(\"Hello\") = %zu (should be 5)\n", ft_strlen("Hello"));
    printf("ft_strlen(\"Hello\\0Hidden\") = %zu (should be 5)\n", ft_strlen("Hello\0Hidden"));

    // Test ft_strdup with different cases
    char *dup1 = ft_strdup("");
    char *dup2 = ft_strdup("Test string");
    char *dup3 = ft_strdup("Hello\0Hidden");
    printf("ft_strdup(\"\") = \"%s\"\n", dup1);
    printf("ft_strdup(\"Test string\") = \"%s\"\n", dup2);
    printf("ft_strdup(\"Hello\\0Hidden\") = \"%s\"\n", dup3);
    free(dup1);
    free(dup2);
    free(dup3);

    // Test ft_strlcpy with different sizes
    char dst[10];
    size_t len;

    len = ft_strlcpy(dst, "Hello", sizeof(dst));
    printf("ft_strlcpy(dst, \"Hello\", 10) = \"%s\", len: %zu\n", dst, len);

    len = ft_strlcpy(dst, "HelloWorld", 6);
    printf("ft_strlcpy(dst, \"HelloWorld\", 6) = \"%s\", len: %zu\n", dst, len);

    len = ft_strlcpy(dst, "Hi", 1);
    printf("ft_strlcpy(dst, \"Hi\", 1) = \"%s\", len: %zu\n", dst, len);

    // Test ft_strncmp
    printf("ft_strncmp(\"abc\", \"abc\", 3) = %d\n", ft_strncmp("abc", "abc", 3));
    printf("ft_strncmp(\"abc\", \"abd\", 3) = %d\n", ft_strncmp("abc", "abd", 3));
    printf("ft_strncmp(\"abc\", \"ab\", 3) = %d\n", ft_strncmp("abc", "ab", 3));
    printf("ft_strncmp(\"abc\", \"abc\", 2) = %d\n", ft_strncmp("abc", "abc", 2));

    // Test ft_strnstr
    printf("ft_strnstr(\"Hello World\", \"World\", 11) = \"%s\"\n",
           ft_strnstr("Hello World", "World", 11));
    printf("ft_strnstr(\"Hello World\", \"World\", 5) = \"%s\"\n",
           ft_strnstr("Hello World", "World", 5));
    printf("ft_strnstr(\"Hello World\", \"\", 11) = \"%s\"\n",
           ft_strnstr("Hello World", "", 11));
}

void test_mem_functions(void)
{
    printf("\n=== Testing Memory Functions ===\n");

    // Test ft_memset
    char buf[10];
    ft_memset(buf, 'A', 5);
    buf[5] = '\0';
    printf("ft_memset(buf, 'A', 5) = \"%s\"\n", buf);

    // Test ft_bzero
    ft_memset(buf, 'B', 9);
    buf[9] = '\0';
    printf("Before bzero: \"%s\"\n", buf);
    ft_bzero(buf, 5);
    printf("After ft_bzero(buf, 5): \"%s\"\n", buf + 5);

    // Test ft_memcpy
    char src[] = "Hello";
    char dst[10];
    ft_memcpy(dst, src, 6);
    printf("ft_memcpy result: \"%s\"\n", dst);

    // Test ft_memmove with overlap
    char str[] = "Hello World";
    printf("Before memmove: \"%s\"\n", str);
    ft_memmove(str + 6, str, 5);
    printf("After ft_memmove(str + 6, str, 5): \"%s\"\n", str);
}

void test_char_functions(void)
{
    printf("\n=== Testing Character Functions ===\n");

    // Test character classification functions
    printf("=== ft_isalpha ===\n");
    printf("ft_isalpha('a') = %d (should be non-zero)\n", ft_isalpha('a'));
    printf("ft_isalpha('Z') = %d (should be non-zero)\n", ft_isalpha('Z'));
    printf("ft_isalpha('1') = %d (should be 0)\n", ft_isalpha('1'));
    printf("ft_isalpha(' ') = %d (should be 0)\n", ft_isalpha(' '));

    printf("\n=== ft_isdigit ===\n");
    printf("ft_isdigit('5') = %d (should be non-zero)\n", ft_isdigit('5'));
    printf("ft_isdigit('a') = %d (should be 0)\n", ft_isdigit('a'));

    printf("\n=== ft_isalnum ===\n");
    printf("ft_isalnum('a') = %d (should be non-zero)\n", ft_isalnum('a'));
    printf("ft_isalnum('5') = %d (should be non-zero)\n", ft_isalnum('5'));
    printf("ft_isalnum('$') = %d (should be 0)\n", ft_isalnum('$'));

    // Test character conversion functions
    printf("\n=== Character conversion ===\n");
    printf("ft_toupper('a') = %c\n", ft_toupper('a'));
    printf("ft_toupper('Z') = %c\n", ft_toupper('Z'));
    printf("ft_toupper('3') = %c\n", ft_toupper('3'));

    printf("ft_tolower('A') = %c\n", ft_tolower('A'));
    printf("ft_tolower('z') = %c\n", ft_tolower('z'));
    printf("ft_tolower('3') = %c\n", ft_tolower('3'));
}

void test_conversion_functions(void)
{
    printf("\n=== Testing Conversion Functions ===\n");

    // Test ft_atoi with various cases
    printf("ft_atoi(\"  -123\") = %d\n", ft_atoi("  -123"));
    printf("ft_atoi(\"+456\") = %d\n", ft_atoi("+456"));
    printf("ft_atoi(\"  \\t\\n\\r\\v\\f  567\") = %d\n", ft_atoi("  \t\n\r\v\f  567"));
    printf("ft_atoi(\"2147483647\") = %d\n", ft_atoi("2147483647"));
    printf("ft_atoi(\"-2147483648\") = %d\n", ft_atoi("-2147483648"));
    printf("ft_atoi(\"abc123\") = %d\n", ft_atoi("abc123"));

    // Test ft_itoa with various cases
    char *num_str;

    num_str = ft_itoa(0);
    printf("ft_itoa(0) = \"%s\"\n", num_str);
    free(num_str);

    num_str = ft_itoa(-12345);
    printf("ft_itoa(-12345) = \"%s\"\n", num_str);
    free(num_str);

    num_str = ft_itoa(INT_MAX);
    printf("ft_itoa(INT_MAX) = \"%s\"\n", num_str);
    free(num_str);

    num_str = ft_itoa(INT_MIN);
    printf("ft_itoa(INT_MIN) = \"%s\"\n", num_str);
    free(num_str);
}

void test_bonus_functions(void)
{
    printf("\n=== Testing Bonus Functions (Linked List) ===\n");

    // Test list creation and basic operations
    t_list *list = NULL;

    // Test ft_lstnew and ft_lstadd_front
    char *content1 = strdup("First");
    char *content2 = strdup("Second");
    char *content3 = strdup("Third");

    t_list *node1 = ft_lstnew(content1);
    t_list *node2 = ft_lstnew(content2);
    t_list *node3 = ft_lstnew(content3);

    ft_lstadd_front(&list, node3);
    ft_lstadd_front(&list, node2);
    ft_lstadd_front(&list, node1);

    // Test ft_lstsize
    printf("List size: %d (should be 3)\n", ft_lstsize(list));

    // Test ft_lstlast
    t_list *last = ft_lstlast(list);
    printf("Last node content: %s (should be \"Third\")\n", (char *)last->content);

    // Print list contents
    printf("\nList contents:\n");
    t_list *current = list;
    while (current)
    {
        printf("%s -> ", (char *)current->content);
        current = current->next;
    }
    printf("NULL\n");

    // Test ft_lstclear
    ft_lstclear(&list, del);
    printf("List after clear (should be NULL): %p\n", (void *)list);
}

void test_fd_functions(void)
{
    printf("\n=== Testing File Descriptor Functions ===\n");

    // Test writing to stdout (fd 1)
    printf("Testing ft_putchar_fd: ");
    ft_putchar_fd('X', 1);
    ft_putchar_fd('\n', 1);

    printf("Testing ft_putstr_fd: ");
    ft_putstr_fd("Hello, World!", 1);
    ft_putchar_fd('\n', 1);

    printf("Testing ft_putendl_fd: ");
    ft_putendl_fd("This should end with a newline", 1);

    printf("Testing ft_putnbr_fd:\n");
    ft_putnbr_fd(12345, 1);
    ft_putchar_fd('\n', 1);
    ft_putnbr_fd(-42, 1);
    ft_putchar_fd('\n', 1);
    ft_putnbr_fd(0, 1);
    ft_putchar_fd('\n', 1);
    ft_putnbr_fd(INT_MAX, 1);
    ft_putchar_fd('\n', 1);
    ft_putnbr_fd(INT_MIN, 1);
    ft_putchar_fd('\n', 1);
}

int main(void)
{
    printf("=== Starting comprehensive libft tests ===\n");

    test_str_functions();
    test_mem_functions();
    test_char_functions();
    test_conversion_functions();
    test_bonus_functions();
    test_fd_functions();

    printf("\n=== All tests completed ===\n");
    return (0);
}
