#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <conio.h>


#define STR_LENGTH 10


int replace(char *str) {
	int n = 0;

	if (NULL != str) {
		for (size_t i = 0; i < strlen(str); i++)
			if (str[i] == ' ') {
				str[i] = '-';
				n += 1;
			}
	}

	return n;
}

int main() {
	char *str = NULL;
	int n = 0;

	str = (char*)malloc(STR_LENGTH * sizeof(char));
	strcpy(str, "1 2 3 4 5 ");

	printf("Before: %s\n", str);
	n = replace(str);

	printf("After: %s\n", str);
	printf("N: %d\n", n);

	//_getch();
	return 0;
}
