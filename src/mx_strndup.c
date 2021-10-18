#include "libmx.h"

char *mx_strndup(const char *s1, size_t n) {
    char *arr_dst = NULL;

	if (mx_strlen(s1) < (int)n) arr_dst = mx_strnew(mx_strlen(s1));

	else arr_dst = mx_strnew(n);

	if (arr_dst == NULL) return NULL;

    return mx_strncpy(arr_dst, s1, n);
}
