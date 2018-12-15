#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num, max = 0;
	scanf("%d", &num);
	int score[1000] = { 0 };
	for (int i = 0; i < num; i++) {
		scanf("%d", &score[i]);
		if (max < score[i]) {
			max = score[i];
		}
	}
	int sum = 0;
	for (int i = 0; i < num; i++) {
		sum=sum+ score[i] / max * 100;
	}
	printf("%d", sum / num);
	//system("pause");
	return 0;
}