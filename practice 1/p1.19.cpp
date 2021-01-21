#include <stdio.h>
//#include <conio.h>

#define swap(t, x, y)\
	{\
		t(tmp) = (x);\
		(x) = (y);\
		(y) = (tmp);\
	}


int main() {
	int a1 = -5,
		b1 = 24;
	char a2 = 'a',
		b2 = 'b';

	printf("[int] swapping:\n");
	printf("Before: a1 = %d , a1 = %d\n", a1, b1);
	swap(int, a1, b1);
	printf("After: b1 = %d , b1 = %d\n", a1, b1);

	printf("\n[char] swapping:\n");
	printf("Before: a2 = %c , a2 = %c\n", a2, b2);
	swap(char, a2, b2);
	printf("After: b2 = %c , b2 = %c\n", a2, b2);

	//_getch();
	return 0;
}
