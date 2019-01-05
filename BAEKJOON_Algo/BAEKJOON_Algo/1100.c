#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	char arr[8][16] = { "\0" };
	int count = 0;
	int a = 0;
	for (int i = 0; i < 8;) {
		for (int j = 0; j < 8; j++) {
			scanf("%c", &arr[i][j]);
			if (arr[i][j] = '\n') {
				i++;
				j = 0;
			}
		}
	}

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (((i + 1) % 2 == 1) && ((j+a + 1) % 2 == 0) && arr[i][j] == 'F') {
				count++;
			}
			else if (((i + 1) % 2 == 0) && ((j+a + 1) % 2 == 1) && arr[i][j] == 'F') {
				count++;
			}
		}
		a++;
	}
	printf("%d", count);
	system("pause");
	return 0;
}