#include "libmx.h"

int mx_strlen(const char *str) {
	int length = 0;

	if(str[0] == '\0') return length;

	while (*str != '\0') {
		length++;
		str++;
	}

	return length;
}
