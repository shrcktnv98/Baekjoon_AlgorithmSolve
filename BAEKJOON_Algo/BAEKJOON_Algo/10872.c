#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num = 0;
	scanf("%d", &num);
	int sum = 1;
	for (int i = 1; i <= num; i++) {
		sum = sum * i;
	}
	
	system("pause");
	return 0;
}