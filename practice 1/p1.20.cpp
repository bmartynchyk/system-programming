#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//#include <conio.h>

#define PRESISSION 1000

int main() {
	int n = 0;
	float rnd = 0.0;

	srand(time(0));
	printf("Range(from 0 to n): "); scanf("%d", &n);

	rnd = rand() % (n - 1);
	rnd += (rand() % PRESISSION) / (float)PRESISSION;

	printf("%f\n", rnd);

	//_getch();
	exit(EXIT_SUCCESS);
}
