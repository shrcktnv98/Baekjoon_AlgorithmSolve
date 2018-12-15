// 2018.12.06일까지 이 파일 소스 분석해올것
// 오늘 집가서 분석후 주석 전부달아서 왜이렇게 작동하는지 설명할수있을때까지 공부하고 잘것

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

	//입력된 문자열이 1글자일 경우 문자 출력하고 종료
	if (strlen(arr) == 1) {
		printf("%s", arr);
		system("pause");
		return 0;
	}

	int max = 0;
	int store = 0;
	int fall = 1;
	char que = '?';
	// a~z까지 비교
	for (int i = 0; i < 26; i++) {
		// alphabet[i]이 max보다 크거나 같을 경우
		if (max <= alphabet[i]) {
			// alphabet[i]이 max보다 클경우
			if (max < alphabet[i]) {
				fall = 1;
			}
			// alphabet[i]이 max와 같을 경우
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