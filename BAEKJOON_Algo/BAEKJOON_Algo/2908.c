#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a[2] = { 0 };
	scanf("%d %d", &a[0], &a[1]);
	int hundred = 0;
	int ten = 0;
	int one = 0;
	for (int i = 0; i < 2; i++) {
		hundred = a[i] / 100;
		a[i] = a[i] - hundred * 100;
		ten = a[i] / 10;
		a[i] = a[i] - ten * 10;
		one = a[i];
		a[i] = one * 100 + ten * 10 + hundred;
	}
	if (a[0] > a[1]) {
		printf("%d", a[0]);
	}
	else {
		printf("%d", a[1]);
	}

	system("pause");
	return 0;
}