#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int arr[3][4] = { 0 };
	int sum[3] = { 0 };
	for (int i = 0; i < 3; i++) {
		scanf("%d %d %d %d", &arr[i][0], &arr[i][1], &arr[i][2], &arr[i][3]);
		sum[i] = arr[i][0] + arr[i][1] + arr[i][2] + arr[i][3];
	}
	for (int i = 0; i < 3; i++) {
		if (sum[i] == 0) {
			printf("D\n");
		}
		else if (sum[i] == 1) {
			printf("C\n");
		}
		else if (sum[i] == 2) {
			printf("B\n");
		}
		else if (sum[i] == 3) {
			printf("A\n");
		}
		else {
			printf("E\n");
		}
	}
	system("pause");
	return 0;
}