#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#include <stdlib.h>
//#include <malloc.h>
int zero = 0;
int one = 0;
int fibonacci(int num);
int main(void) {
	int num;
	scanf("%d", &num);
	//int *arr = (int*)malloc(sizeof(int) * num);
	for (int i = 0; i < num; i++) {
		int a = 0;
		scanf("%d", &a);
		fibonacci(a);
		printf("%d %d\n", zero, one);
		zero = 0;
		one = 0;
	}
	system("pause");
	return 0;
}
int fibonacci(int num) {
	if (num == 0) {
		return zero++;
	}
	else if (num == 1) {
		return one++;
	}
	else {
		return fibonacci(num - 1) + fibonacci(num - 2);
	}
}