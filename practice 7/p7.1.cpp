#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main() {
	char ch;
	FILE *fread = popen("ls -l", "r");
	FILE *fwrite = popen("more -2", "w");

	if (!fread || !fwrite) {
		perror("Opening failed!!!");
		exit(EXIT_FAILURE);
	}

	ch = '1';
	while (ch != EOF) {
		ch = fgetc(fread);
		fputc(ch, fwrite);
	}

	if (-1 == pclose(fread) || -1 == pclose(fwrite)) {
		perror("Opening failed!!!");
		exit(EXIT_FAILURE);
	}

	exit(EXIT_SUCCESS);
}
