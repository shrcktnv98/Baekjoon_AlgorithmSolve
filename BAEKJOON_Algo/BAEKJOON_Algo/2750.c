#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int test = 0;
	scanf("%d", &test);
	int *num = (int*)malloc(sizeof(int)*test);
	for (int i = 0; i < test; i++) {
		scanf("%d", &num[i]);
	}
	int temp = 0;
	for (int i = 0; i < test; i++) {
		for (int j = i+1; j < test; j++) {
			if (num[i] > num[j]) {
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}
	for (int i = 0; i < test; i++) {
		printf("%d\n", num[i]);
	}
	system("pause");
	return 0;
}