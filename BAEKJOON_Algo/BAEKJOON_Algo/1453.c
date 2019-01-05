#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int num = 0;
	int want = 0;
	int arr[100] = { 0 };
	int count = 0;
	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		scanf("%d", &want);
		if (arr[want - 1] == 0) {
			arr[want - 1] = 1;
		}
		else if (arr[want - 1] == 1) {
			count++;
		}
	}
	printf("%d", count);
	system("pause");
	return 0;
}