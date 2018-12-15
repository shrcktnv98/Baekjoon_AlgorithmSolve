#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int month = 0;
	int day = 0;
	scanf("%d %d", &month, &day);
	int sum = 0;
	for(int i=1;i<month;i++){
		switch (i) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			sum += 31;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			sum += 30;
			break;
		case 2:
			sum += 28;
			break;
		default:
			break;
		}
	}
	sum += day;
	int calc = sum % 7;
	if (calc == 1) {
		printf("MON");
	}
	else if (calc == 2) {
		printf("TUE");
	}
	else if (calc == 3) {
		printf("WED");
	}
	else if (calc == 4) {
		printf("THU");
	}
	else if (calc == 5) {
		printf("FRI");
	}
	else if (calc == 6) {
		printf("SAT");
	}
	else {
		printf("SUN");
	}
	system("pause");
	return 0;
}