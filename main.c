#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "libft.h"

// Helper to print arrays (e.g., memset, memmove tests)
void print_bytes(const char *label, void *data, size_t len) {
    printf("%s: ", label);
    for (size_t i = 0; i < len; i++)
        printf("%02x ", ((unsigned char *)data)[i]);
    printf("\n");
}

// Test functions for libft
void test_ft_memset() {
    printf("\nTesting ft_memset:\n");
    char str[20] = "Hello, 42!";
    ft_memset(str + 7, '*', 3);
    print_bytes("Result", str, 20);
}

void test_ft_bzero() {
    printf("\nTesting ft_bzero:\n");
    char str[20] = "Hello, 42!";
    ft_bzero(str + 7, 5);
    print_bytes("Result", str, 20);
}

void test_ft_memcpy() {
    printf("\nTesting ft_memcpy:\n");
    char src[] = "42 Heilbronn";
    char dest[20];
    ft_memcpy(dest, src, 12);
    printf("Source: %s | Destination: %s\n", src, dest);
}

void test_ft_memmove() {
    printf("\nTesting ft_memmove:\n");
    char str[] = "Hello, 42!";
    ft_memmove(str + 6, str, 5);
    printf("Result: %s\n", str);
}

void test_ft_memchr() {
    printf("\nTesting ft_memchr:\n");
    const char *str = "42 Network!";
    char *result = ft_memchr(str, 'N', strlen(str));
    printf("Input: %s | Search: 'N' | Result: %s\n", str, result);
}

void test_ft_memcmp() {
    printf("\nTesting ft_memcmp:\n");
    const char *s1 = "abcd";
    const char *s2 = "abce";
    int result = ft_memcmp(s1, s2, 4);
    printf("s1: %s | s2: %s | Result: %d\n", s1, s2, result);
}

void test_ft_strlen() {
    printf("\nTesting ft_strlen:\n");
    const char *str = "Hello, 42!";
    size_t len = ft_strlen(str);
    printf("Input: %s | Length: %lu\n", str, len);
}

void test_ft_isalpha() {
    printf("\nTesting ft_isalpha:\n");
    char c = 'A';
    printf("Char: %c | Result: %d\n", c, ft_isalpha(c));
}

void test_ft_isdigit() {
    printf("\nTesting ft_isdigit:\n");
    char c = '3';
    printf("Char: %c | Result: %d\n", c, ft_isdigit(c));
}

void test_ft_isalnum() {
    printf("\nTesting ft_isalnum:\n");
    char c = '9';
    printf("Char: %c | Result: %d\n", c, ft_isalnum(c));
}

void test_ft_isascii() {
    printf("\nTesting ft_isascii:\n");
    char c = 128;
    printf("Char: %d | Result: %d\n", c, ft_isascii(c));
}

void test_ft_isprint() {
    printf("\nTesting ft_isprint:\n");
    char c = ' ';
    printf("Char: '%c' | Result: %d\n", c, ft_isprint(c));
}

void test_ft_toupper() {
    printf("\nTesting ft_toupper:\n");
    char c = 'a';
    printf("Char: %c | Result: %c\n", c, ft_toupper(c));
}

void test_ft_tolower() {
    printf("\nTesting ft_tolower:\n");
    char c = 'A';
    printf("Char: %c | Result: %c\n", c, ft_tolower(c));
}

void test_ft_strchr() {
    printf("\nTesting ft_strchr:\n");
    const char *str = "Hello, world!";
    char *result = ft_strchr(str, 'o');
    printf("Input: %s | Search: 'o' | Result: %s\n", str, result);
}

void test_ft_strrchr() {
    printf("\nTesting ft_strrchr:\n");
    const char *str = "Hello, world!";
    char *result = ft_strrchr(str, 'o');
    printf("Input: %s | Search: 'o' | Result: %s\n", str, result);
}

void test_ft_strncmp() {
    printf("\nTesting ft_strncmp:\n");
    const char *s1 = "Hello";
    const char *s2 = "Hello, 42!";
    int result = ft_strncmp(s1, s2, 5);
    printf("s1: %s | s2: %s | Result: %d\n", s1, s2, result);
}

void test_ft_strlcpy() {
    printf("\nTesting ft_strlcpy:\n");
    char dest[20];
    const char *src = "Hello, 42!";
    size_t result = ft_strlcpy(dest, src, sizeof(dest));
    printf("Source: %s | Dest: %s | Length: %lu\n", src, dest, result);
}

void test_ft_strlcat() {
    printf("\nTesting ft_strlcat:\n");
    char dest[20] = "Hello";
    const char *src = ", 42!";
    size_t result = ft_strlcat(dest, src, sizeof(dest));
    printf("Source: %s | Dest: %s | Length: %lu\n", src, dest, result);
}

void test_ft_atoi() {
    printf("\nTesting ft_atoi:\n");
    const char *str = "  -42";
    int result = ft_atoi(str);
    printf("Input: %s | Result: %d\n", str, result);
}

void test_ft_strdup() {
    printf("\nTesting ft_strdup:\n");
    const char *str = "Libft";
    char *dup = ft_strdup(str);
    printf("Original: %s | Duplicate: %s\n", str, dup);
    free(dup);
}

void test_ft_calloc() {
    printf("\nTesting ft_calloc:\n");
    int *arr = (int *)ft_calloc(5, sizeof(int));
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    free(arr);
}

int main() {
    printf("Libft Tester\n============\n");

    test_ft_memset();
    test_ft_bzero();
    test_ft_memcpy();
    test_ft_memmove();
    test_ft_memchr();
    test_ft_memcmp();
    test_ft_strlen();
    test_ft_isalpha();
    test_ft_isdigit();
    test_ft_isalnum();
    test_ft_isascii();
    test_ft_isprint();
    test_ft_toupper();
    test_ft_tolower();
    test_ft_strchr();
    test_ft_strrchr();
    test_ft_strncmp();
    test_ft_strlcpy();
    test_ft_strlcat();
    test_ft_atoi();
    test_ft_strdup();
    test_ft_calloc();

    printf("\nAll tests completed!\n");
    return 0;
}
