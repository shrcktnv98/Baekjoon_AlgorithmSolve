#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num = 0;
	scanf("%d", &num);
	int count = 0;
	int result = 1;
	for (int i = 0; result < num; i++) {
		result += 6 * i;
		count = i;
	}
	printf("%d", count+1);
	system("pause");
	return 0;
}