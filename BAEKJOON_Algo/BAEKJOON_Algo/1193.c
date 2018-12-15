#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num = 0;
	scanf("%d", &num);
	int count = 0;
	int a = 1;
	int b = 1;
	for (int i = 1; count!=num; i++) {
		for (int j =0; (j < i)&&(count!=num); j++) {
			count++;
			if (i % 2 == 1) {
				if (count == num) {
					printf("%d/%d ", a, b);
				}
				a = a - 1;
				b = b + 1;
			}
			else {
				if (count == num) {
					printf("%d/%d ", a, b);
				}
				b = b - 1;
				a = a + 1;
			}
		}
		if (i % 2 == 1) {
			a = a + 1;
			b = b - 1;
			b++;
		}
		else {
			b = b + 1;
			a = a - 1;
			a++;
		}
	}
	system("pause");
	return 0;
}