// 2018.12.06�ϱ��� �� ���� �ҽ� �м��ؿð�
// ���� ������ �м��� �ּ� ���δ޾Ƽ� ���̷��� �۵��ϴ��� �����Ҽ����������� �����ϰ� �߰�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char arr[1000000];
	int alphabet[26] = { 0 };
	scanf("%s", &arr);
	for (int i = 0; arr[i] != NULL; i++) {
		if ((arr[i] >= 'a') && (arr[i] <= 'z')) arr[i] -= 32;
		for (int j = 65; j <= 90; j++) {
			if ((int)arr[i] == j) alphabet[j - 65] += 1;
		}
	}

	//�Էµ� ���ڿ��� 1������ ��� ���� ����ϰ� ����
	if (strlen(arr) == 1) {
		printf("%s", arr);
		system("pause");
		return 0;
	}

	int max = 0;
	int store = 0;
	int fall = 1;
	char que = '?';
	// a~z���� ��
	for (int i = 0; i < 26; i++) {
		// alphabet[i]�� max���� ũ�ų� ���� ���
		if (max <= alphabet[i]) {
			// alphabet[i]�� max���� Ŭ���
			if (max < alphabet[i]) {
				fall = 1;
			}
			// alphabet[i]�� max�� ���� ���
			else {
				fall = 0;
			}
			max = alphabet[i];
			store = i;
		}
	}
	// al
	if (fall == 0) {
		printf("%c", que);
	}
	else printf("%c", store + 65);
	system("pause");
	return 0;
}