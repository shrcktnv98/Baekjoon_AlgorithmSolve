#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int test = 0;
	scanf("%d", &test);
	int *num = (int*)malloc(sizeof(int)*test+1);
	for (int i = 0; i < test; i++) {
		scanf("%d", &num[i]);
	}
	for (int i = 0; i < test; i++) {
		for (int j = i; j < test; j++) {
			if (num[i] > num[j]) {
				int temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}
	for (int i = 0; i < test; i++) {
		printf("%d\n", num[i]);
	}
	free(num);
	system("pause");
	return 0;
}