/**
 * @file strings.h
 * @author Egor Orachev
 * @date 9/3/2022
 */

#ifndef LEARNING_C_STRINGS_H
#define LEARNING_C_STRINGS_H

/**
 * Get number of characters in the string excluding final null-terminator
 * @param string Null-terminated string
 * @return String length
 */
int string_length(const char *string) {
    return -1;
}

/**
 * Lexicographical comparison of two strings
 * @param str1 Null-terminated string
 * @param str2 Null-terminated string
 * @return -1 if first string less than second, 0 if equals, 1 if first string greater then second
 */
int string_compare(const char *str1, const char *str2) {
    return -1;
}

/**
 * Copy src string to dst string
 * @param dst Where to store copy
 * @param src Null-terminated string to copy
 * @return Null-terminated copied string
 */
char *string_copy(char *dst, const char *src) {
    return dst;
}

/**
 * Concatenates two strings, appending src in the end of dst
 * @param dst Null-terminated string where to append
 * @param src Null-terminated string to append
 * @return Null-terminated concatenated dst + src
 */
char *string_concatenate(char *dst, const char *src) {
    return dst;
}

/**
 * Copy substring from source string
 * @param dst Where to store substring
 * @param src Null-terminated string where to find substring
 * @param start Index of first char of substring
 * @param length Number of chars in substring
 * @return Null-terminated dst substring
 */
char *string_substring(char *dst, const char *src, int start, int length) {
    return dst;
}

/**
 * Find first entry of what string in src string
 * @param src Null-terminated string where to find
 * @param what Null-terminated string what to find
 * @return Start of substring in src string or null
 */
const char *string_find_first(const char *src, const char *what) {
    return src;
}

#endif//LEARNING_C_STRINGS_H
