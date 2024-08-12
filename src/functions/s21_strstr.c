#include "../s21_string.h"

char *s21_strstr(const char *haystack, const char *needle) {
  char *result = S21_NULL;

  if (haystack != S21_NULL && needle != S21_NULL) {
    s21_size_t needle_len = s21_strlen(needle);
    if (needle_len != 0) {
      s21_size_t haystack_len = s21_strlen(haystack);
      if (haystack_len >= needle_len) {
        s21_size_t i = 0;
        for (; i <= haystack_len - needle_len; i++) {
          if (s21_strncmp(haystack + i, needle, needle_len) == 0) {
            result = (char *)(haystack + i);
            break;
          }
        }
      }
    } else {
      result = (char *)haystack;
    }
  }
  return result;
}