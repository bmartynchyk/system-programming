#include <mach-o/getsect.h>
#include <stdio.h>
#include <stdlib.h>

int global_value = 0;

int main() {
	printf("etext: %10p\n", (void *)get_etext());
	printf("main: %p\n\n", main);

	printf("edata: %10p\n", (void *)get_edata());
	printf("value: %p\n\n", &global_value);

	printf("end: %10p\n", (void *)get_end());

	printf("heap addr: %p\n", (int *)calloc(1, sizeof(int)));

	printf("\nstack\n");

	int stack_level = 3;
	for (int i = 0; i < stack_level; i += 1) {
		int arr[100];

		printf("level: %d, arr: %p\n", i, arr);
	}

	return 0;
}
