#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
//#include <conio.h>



int findValue(double *arr, int size, double val) {
	for (int i = 0; i < size; i++)
		if (fabs(arr[i] - val) < 0.01) return i;

	return -1;
}


int main() {
	int size = 0,
		pos = -1;
	double val = 0.0,
		*arr = NULL;

	srand(time(0));
	printf("size = "); scanf("%d", &size);

	if (size < 0) {
		fprintf(stderr, "Size should be more than 0!!!\n");
		exit(EXIT_FAILURE);
	}

	arr = (double *)malloc(size * sizeof(double));
	for (int i = 0; i < size; i++)
		arr[i] = (double)rand() / RAND_MAX * size;

	printf("\nArray:\n");
	for (int i = 0; i < size; i += 1)
		printf("%lf  ", arr[i]);

	printf("\n\nSearch val = "); scanf("%lf", &val);
	pos = findValue(arr, size, val);

	if (pos != -1) printf("arr[%d] = %lf\n", pos, arr[pos]);
	else printf("Number din not find\n");

	free(arr); // Free memory.
	//_getch();
	exit(EXIT_SUCCESS);
}
