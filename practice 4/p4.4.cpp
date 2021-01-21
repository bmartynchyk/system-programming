#include <stdlib.h>

#define NUM 100


int main() {
	char *ptr = NULL;
	int i = 0;

	while (i != NUM) {
		if (NULL == ptr) ptr = (char*)malloc(NUM);

		*(ptr + i) = (char)i;

		if (NULL != ptr) {
			free(ptr);
			ptr = NULL;
		}

		i += 1;
	}

	return 0;
}
