#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num = 0;
	scanf("%d", &num);
	int result = num;
	int count = 0;
	do {
		int ten = result / 10;
		int one = result - ten * 10;
		result = ten + one;
		int aone = result - result / 10 * 10;
		result = one * 10 + aone;
		count++;
	} while (num != result);
	printf("%d", count);
	system("pause");
	return 0;
}