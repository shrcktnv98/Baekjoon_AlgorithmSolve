#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char arr[100][100];
	int len = 0;
	scanf("%d", &len);
	for (int i = 0; i < len; i++) {
		scanf("%s", arr[i]);
	}
	//���ӵǴ� �ܾ� �����

	system("pause");
	return 0;
}