#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>

#define MINUTE 60 // Seconds in minute.
#define HOUR 60 // Minutes in hour.

int main() {
	int h = 0, m = 0, s = 0;

	printf("s = "); scanf("%d", &s);

	if (s < 0) {
		fprintf(stderr, "Seconds should be >0 (greater than zero)!!\n");
		exit(EXIT_FAILURE);
	}

	m = s / MINUTE;
	s %= MINUTE;
	h = m / HOUR;
	m %= HOUR;

	if (h > 0) printf("h = %d hour(s) ", h);
	if (m > 0) printf("m = %d minute(s) ", m);
	printf("s = %d second(s)\n", s);

	//_getch();
	exit(EXIT_SUCCESS);
}
