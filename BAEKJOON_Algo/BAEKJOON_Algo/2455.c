#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int arr[4][2] = { 0 };
	int max = 0;
	int people = 0;
	for (int i = 0; i < 4; i++) {
		scanf("%d %d", &arr[i][0], &arr[i][1]);
		people = people + arr[i][1] - arr[i][0];
		if (max < people) {
			max = people;
		}
	}
	printf("%d", max);
	system("pause");
	return 0;
}