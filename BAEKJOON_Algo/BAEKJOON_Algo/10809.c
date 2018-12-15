#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char S[100];
	scanf("%s", &S);
	for (int i = 97; i<=122;i++) {
		int count = 0;
		for (int j = 0; j <= strlen(S); j++) {
			if ((int)S[j] == i) {
				count = j;
				break;
			}
			else count = -1;
		}
		printf("%d", count);
		printf(" ");
	}
	system("pause");
	return 0;
}