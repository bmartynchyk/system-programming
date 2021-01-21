#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main(void) {
	void *p;

	p = malloc(0);

	if (NULL == p) printf("'p' equals NULL\n");
	else printf("'p' doesn't equals NULL\n");

	free(p);

	_getch();
	exit(EXIT_SUCCESS);
}
