#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a = 0;
	int b = 0;
	char equl = '=';
	scanf("%d %d", &a, &b);
	if (a > b) {
		printf("%c", '>');
	}
	else if (a < b) {
		printf("%c", '<');
	}
	else if (a == b) {
		printf("%c%c", equl, equl);
	}
	system("pause");
	return 0;
}