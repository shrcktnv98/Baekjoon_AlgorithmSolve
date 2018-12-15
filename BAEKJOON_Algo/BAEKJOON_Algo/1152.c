#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(void) {
//	char n[1000000];
//	scanf("%[^\n]s", &n);
//	char *ptr = strtok(n, " ");
//	int count = 0;
//
//	while (ptr != NULL) {
//		count++;
//		ptr = strtok(NULL, " ");
//	}
//	printf("%d", count);
//
//	system("pause");
//	return 0;
//}

int main(void) {
	char n[1000000];
	int count = 0;
	scanf("%[^\n]", &n);

	for (int i = 0;(n[i]==NULL)&&(n[i+1]==NULL); i++) {
		if (n[i]='\0') {
			count++;
		}
	}
	printf("%d", count);
	system("pause");
	return 0;
}