#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num = 0;
	int count = 0;
	int a = 64;
	int sum = 0;
	scanf("%d", &num);
	for (; num != sum;) {
		if (a+sum > num) {
			a /= 2;
		}
		else if (a+sum <= num) {
			sum += a;
			count++;
			a /= 2;
		}
	}
	printf("%d", count);
	system("pause");
	return 0;
}