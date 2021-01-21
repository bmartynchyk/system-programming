#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
//#include <conio.h>


#define SIZE 5

typedef void *(*voidptr_func)();

void *voidAllocator();
int findValue(int*, size_t, int);
void fillArray(void*, size_t, size_t, voidptr_func);


void fillArray(void *base, size_t size, size_t el_size, voidptr_func func) {
	char *cp = (char*)base;

	for (size_t i = 0; i < size; i += 1, cp += el_size) {
		void *val = func();
		memcpy(cp, val, size);
		free(val);
	}
}

int findValue(int *arr, size_t size, int val) {
	for (size_t pos = 0; pos < size; pos++)
		if (arr[pos] == val) return pos;

	return -1;
}

void *voidAllocator() {
	int *val = (int *)malloc(sizeof(int));
	*val = rand();

	return (void *)val;
}


int main() {
	int arr[SIZE];
	int val = 0,
		pos = 0;

	srand(time(0));

	fillArray(arr, SIZE, sizeof(int), voidAllocator);

	printf("Array:\n", SIZE);
	for (size_t i = 0; i < SIZE; i += 1)
		printf("%d  ", arr[i]);

	printf("\n\nValue:"); scanf("%d", &val);
	pos = findValue(arr, SIZE, val);

	if (pos != -1) printf("Result: arr[%d] = %d\n", pos, arr[pos]);
	else printf("Number didn't find in array!\n");
 //_getch();
	return 0;
}
