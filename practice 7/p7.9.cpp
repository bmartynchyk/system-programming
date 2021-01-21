#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main() {
	time_t start = 0, stop = 0;

	srand(time(0));

	time(&start);
	sleep(rand() % 1000);
	time(&stop);

	printf("Execution time: %ds \n", (int)(stop - start));

	exit(EXIT_SUCCESS);
}
