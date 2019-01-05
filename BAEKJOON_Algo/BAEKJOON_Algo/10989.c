#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int arr[10001] = { 0 };
	int num = 0;
	scanf("%d", &num);
	int a = 0;
	for (int i = 0; i < num; i++) {
		scanf("%d", &a);
		arr[a]++;
	}
	printf("=====\n=====\n");
	for (int i = 0; i <= 10000; i++) {
		if (arr[i] != 0) {
			for (int j = 0; j < arr[i]; j++) {
				printf("%d\n", i);
			}
		}
	}
	system("pause");
	return 0;
}