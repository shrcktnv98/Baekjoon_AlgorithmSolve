#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int arrsize, number, inputnumber = 0;
	scanf("%d %d", &arrsize, &number);

	for (int i = 0; i < arrsize; i++) {
		scanf("%d ", &inputnumber);
		if (inputnumber < number) {
			printf("%d ", inputnumber);
		}
	}
	system("pause");
	return 0;
}