#include "libmx.h"

void *my_realloc(void *ptr, size_t originalLength, size_t newLength) {
	if (newLength == 0) {
		free(ptr);
		return NULL;
	}
	else if (!ptr) {
		return malloc(newLength);
	}
	else if (newLength <= originalLength) {
		return ptr;
	}
	else {
		void *ptrNew = malloc(newLength);

		if (ptrNew) {
			mx_memcpy(ptrNew, ptr, originalLength);
			free(ptr);
		}
		return ptrNew;
	}
}
