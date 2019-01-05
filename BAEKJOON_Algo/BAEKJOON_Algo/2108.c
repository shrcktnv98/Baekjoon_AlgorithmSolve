#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main(void) {
	int num = 0;
	scanf("%d", &num);
	int sum = 0;
	int count = 0;
	int plus[4001] = { 0 };
	int minus[4001] = { 0 };
	int a = 0;
	int center = num / 2 + 1;
	int centerNum = 0;
	int min = 0;
	int range = 0;
	int MIN = 0;
	int MAX = 0;
	for (int i = 0; i < num; i++) {
		scanf("%d", &a);
		sum += a;
		if (a >= 0) {
			plus[a]++;
		}
		else {
			a = abs(a);
			minus[a]++;
		}
	}
	for (int i = 4000; i >= 0; i--) {
		if (plus[i] != 0) {
			count++;
			if (center == count) {
				centerNum = i;
			}
		}
	}
	for (int i = 1; i < 4001; i++) {
		if (minus[i] != 0) {
			count++;
			if (center == count) {
				centerNum = i * (-1);
			}
		}
	}
	int cnt = 0;
	for (int i = 4000; i >= 0; i--) {
		if (minus[i] != 0) {
			cnt++;
		}
		if (cnt == 2) {
			min = i * (-1);
		}
	}
	for (int i = 0; i < 4001; i++) {
		if (plus[i] != 0) {
			cnt++;
		}
		if (cnt == 2) {
			min = i;
		}
	}
	for (int i = 0; i < 4001; i++) {
		if (minus[i] != 0) {
			MAX = i * (-1);
			break;
		}
	}
	for (int i = 4000; i >= 0; i--) {
		if (plus[i] != 0) {
			MAX = i;
			break;
		}
	}
	for (int i = 0; i < 4001; i++) {
		if (plus[i] != 0) {
			MIN = i;
			break;
		}
	}
	for (int i = 4000; i >= 0; i--) {
		if (minus[i] != 0) {
			MIN = i * (-1);
			break;
		}
	}
	range = MAX - MIN;

	if (num == 1) {
		min = a;
	}
	double avg = 0.0;
	if (sum > 0) {
		avg = sum / num + 0.5;
	}
	else {
		avg = sum / num - 0.5;
	}
	printf("%d\n", (int)avg);
	printf("%d\n", centerNum);
	printf("%d\n", min);
	printf("%d\n", range);

	system("pause");
	return 0;
}