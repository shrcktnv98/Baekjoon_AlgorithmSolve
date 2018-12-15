#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num = 0;
	scanf("%d", &num);
	for (int i = 1; i <= num * 2 - 1; i++) {
		if (i > num) {
			
		}
		else {
			for (int j = 0; j < i; j++) {
				printf("*");
			}
			for (int k = 0; k < num - i; k++) {
				printf(" ");
			}
			for (int h = 0; h < num - i; h++) {
				printf(" ");
			}
			for (int l = 0; l < i; l++) {
				printf("*");
			}
		}
		printf("\n");
	}
	system("pause");
	return 0;
}