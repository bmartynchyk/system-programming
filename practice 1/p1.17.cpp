#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//#include <conio.h>

#define UNSIGNED_SHORT 255

void dec8_to_bin(unsigned char number) {
	printf("Dec = %u\nBin = ", number);

	for (unsigned char i = (UNSIGNED_SHORT + 1) / 2; i; i >>= 1)
		printf("%c", number & i ? '1' : '0');
}

int main() {
	srand(time(0));
	dec8_to_bin(rand() % 100);

	printf("\n");

	//_getch();
	exit(EXIT_SUCCESS);
}
