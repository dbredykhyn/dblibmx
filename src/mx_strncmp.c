#include "libmx.h"

int mx_strncmp(const char *s1, const char *s2, int n) {
    int i = 1;
    
    while ( ( *s1 != '\0' && *s2 != '\0' ) && *s1 == *s2 && i < n) {
        s1++;
        s2++;
        i++;
    }
    if (*s1 == *s2) {
    return 0;
    }
    else {
        return *s1 - *s2;
    }
}
