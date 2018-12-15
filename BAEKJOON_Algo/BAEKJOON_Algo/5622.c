#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char str[16];
	//int num[16] = { 0, };
	int sum = 0;
	scanf("%s", &str);

	int length=2;
	for (int i = 2; i < 16; i++) {
		if (str[i] == '\0') {
			length = i;
			break;
		}
	}

	for (int i = 0; i<length; i++) {
		switch (str[i]) {
		case 'A':
		case 'B':
		case 'C':
			sum += 2;
			break;
		case 'D':
		case 'E':
		case 'F':
			sum += 3;
			break;
		case 'G':
		case 'H':
		case 'I':
			sum += 4;
			break;
		case 'J':
		case 'K':
		case 'L':
			sum += 5;
			break;
		case 'M':
		case 'N':
		case 'O':
			sum += 6;
			break;
		case 'P':
		case 'Q':
		case 'R':
		case 'S':
			sum += 7;
			break;
		case 'T':
		case 'U':
		case 'V':
			sum += 8;
			break;
		case 'W':
		case 'X':
		case 'Y':
		case 'Z':
			sum += 9;
			break;
		default:
			break;
		}
	}


	printf("%d", sum+length);
	system("pause");
	return 0;
}