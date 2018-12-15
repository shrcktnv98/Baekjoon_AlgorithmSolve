#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
	int arr[3] = { 0 };
	int result = 1;
	for (int i = 0; i < 3; i++) {
		scanf("%d", &arr[i]);
		result *= arr[i];
	}
	char str[12] = { 0 };
	_itoa(result, str, 10);
	int a[10] = { 0 };
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == '0') {
			a[0]++;
		}
		else if (str[i] == '1') {
			a[1]++;
		}
		else if (str[i] == '2') {
			a[2]++;
		}
		else if (str[i] == '3') {
			a[3]++;
		}
		else if (str[i] == '4') {
			a[4]++;
		}
		else if (str[i] == '5') {
			a[5]++;
		}
		else if (str[i] == '6') {
			a[6]++;
		}
		else if (str[i] == '7') {
			a[7]++;
		}
		else if (str[i] == '8') {
			a[8]++;
		}
		else if (str[i] == '9') {
			a[9]++;
		}
	}
	for (int i = 0; i < 10; i++) {
		printf("%d\n", a[i]);
	}
	system("pause");
	return 0;
}