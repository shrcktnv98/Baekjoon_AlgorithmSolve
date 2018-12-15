#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int test = 0;
	scanf("%d", &test);
	int *level = (int*)malloc(sizeof(int)*test);
	int *room = (int*)malloc(sizeof(int)*test);
	int *num = (int*)malloc(sizeof(int)*test);
	for (int i = 0; i < test; i++) {
		scanf("%d %d %d", &level[i], &room[i], &num[i]);
	}
	for (int i = 0; i < test; i++) {
		int a = 0;
		if (num[i] % level[i] == 0) {
			a = level[i] * 100;
		}
		else {
			a = num[i] % level[i] * 100;
		}
		int b = 0;
		if (num[i] <=level[i]) {
			b = 1;
		}
		else if(num[i]%level[i]==0){
			b = num[i] / level[i];
		}
		else {
			b = num[i] / level[i] + 1;
		}
		printf("%d\n", a+b);
	}
	free(level);
	free(room);
	free(num);
	system("pause");
	return 0;
}