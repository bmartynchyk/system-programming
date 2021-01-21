#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>


#define BUFF 256


int main() {
	int rdx = 0;
	long res = 0;
	char str[BUFF],
		*ptr = NULL;

	printf("rdx = "); scanf("%d", &rdx);

	if (rdx < 2 || rdx > 10) {
		fprintf(stderr, "Radix should be in range [2..10]!!!\n");
		//_getch();
		exit(EXIT_FAILURE);
	}

	printf("Number to translate = "); scanf("%s", str);

	ptr = str;
	res = -1;

	while (*ptr)
		if (isdigit(*ptr) && *ptr - '0' < rdx) {
			res = strtol(ptr, &ptr, rdx);
		}
		else ++ptr;

		if (res != -1) printf("Result: %ld\n", res);
		else fprintf(stderr, "Number translation failed!!!\n");

		//_getch();
		exit(EXIT_SUCCESS);
}
