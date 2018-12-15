#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num = 0;
	scanf("%d", &num);
	int *M = (int*)malloc(sizeof(int)*num);
	int *N = (int*)malloc(sizeof(int)*num);
	int *x = (int*)malloc(sizeof(int)*num);
	int *y = (int*)malloc(sizeof(int)*num);
	for (int i = 0; i < num; i++) {
		scanf("%d %d %d %d", &M[i], &N[i], &x[i], &y[i]);
	}
	int count = 1;
	int a = 1;
	int b = 1;
	for (int i = 0; i < num; i++) {
		count = 1;

		count++;
		printf("%d", count);
	}
	system("pause");
	return 0;
}