#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void) {
	char a[100];
	int count = 0;
	scanf("%s", &a);
	for (int i = 0; i < strlen(a); i++) {
		printf("%c", a[i]);
		count++;
		if (count % 10 == 0) {
			printf("\n");
			count = 0;
		}
	}
	system("pause");
	return 0;
}