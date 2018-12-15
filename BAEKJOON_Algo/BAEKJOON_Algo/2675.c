#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char arr[9][21];
	int test = 0;
	int num[21];
	scanf("%d", &test);
	for (int i = 0; i < test; i++) {
		scanf("%d %s", &num[i], &arr[i]);
	}

	for (int i = 0; i < test; i++) {
		for (int j = 0; j < 20; j++) {
			if (arr[i][j] == NULL) break;
			for (int k = 0; k < num[i]; k++) {
				printf("%c", arr[i][j]);
			}
		}
		printf("\n");
	}

	system("pause");
	return 0;
}