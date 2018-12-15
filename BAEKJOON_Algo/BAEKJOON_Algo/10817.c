#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num[3] = { 0 };
	scanf("%d %d %d", &num[0], &num[1], &num[2]);

	int store = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = i; j < 3; j++) {
			if (num[i] < num[j]) {
				store = num[i];
				num[i] = num[j];
				num[j] = store;
			}
		}
	}
	printf("%d", num[1]);
	system("pause");
	return 0;
}