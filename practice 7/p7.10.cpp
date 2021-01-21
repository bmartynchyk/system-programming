#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>


#define PRESISSION 1000000
#define NUM 5
#define RANGE 100


int main() {
	int n = 0;
	float rnd = 0.0;

	srand(time(0));
	printf("Range(from 0 to 1): "); // 0 - 1
	for (int i = 0; i < NUM; i += 1)
		printf("\n%-10f ", (float)((rand() % PRESISSION) / (float)PRESISSION));

	printf("\n\nRange(from 0 to %d): ", RANGE); // 0 - N
	for (int i = 0; i < NUM; i++) {
		rnd = rand() % RANGE;
		rnd += (rand() % PRESISSION) / (float)PRESISSION;

		printf("\n%-10f", rnd);
	}

	printf("\n");
	_getch();
	return 0;
}
