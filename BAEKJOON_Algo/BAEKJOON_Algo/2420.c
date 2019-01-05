#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int num1 = 0;
	int num2 = 0;
	scanf("%d %d", &num1, &num2);
	int a = num1 - num2;
	if (a < 0) {
		printf("%d", a*(-1));
	}
	else {
		printf("%d", a);
	}
	system("pause");
	return 0;
}