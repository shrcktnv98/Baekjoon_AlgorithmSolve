#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num = 0;
	scanf("%d", &num);
	int a[7] = { 0 };
	int i = 0;
	int max = 0;
	if (num == 0)max = 1;
	if (num < 10)a[6] = num;
	for (int j = 0; num>9; j++) {
		if (num >= 1000000) {
			a[0] = num / 1000000;
			num -= a[0] * 1000000;
		}
		else if (num >= 100000) {
			a[1] = num / 100000;
			num -= a[1]* 100000;
		}
		else if (num >= 10000) {
			a[2] = num / 10000;
			num -= a[2] * 10000;
		}
		else if (num >= 1000) {
			a[3] = num / 1000;
			num -= a[3] * 1000;
		}
		else if (num >= 100) {
			a[4] = num / 100;
			num -= a[4] * 100;
		}
		else if (num >= 10) {
			a[5] = num / 10;
			num -= a[5] * 10;
			a[6] = num;
		}
	}
	for (int j = 0; a[j] == 0; j++) {
		i++;
	}
	int store[9] = { 0 };
	for (int j = i; j < 7; j++) {
		switch (a[j]) {
		case 0:
			store[0]++;
			break;
		case 1:
			store[1]++;
			break;
		case 2:
			store[2]++;
			break;
		case 3:
			store[3]++;
			break;
		case 4:
			store[4]++;
			break;
		case 5:
			store[5]++;
			break;
		case 6:
		case 9:
			store[6]++;
			break;
		case 7:
			store[7]++;
			break;
		case 8:
			store[8]++;
			break;
		}
	}
	if (store[6] % 2 == 1) {
		store[6] = store[6] / 2 + 1;
	}
	else {
		store[6] /= 2;
	}
	for (int j = 0; j < 9; j++) {
		if (max < store[j]) {
			max = store[j];
		}
	}
	printf("%d", max);
	system("pause");
	return 0;
}