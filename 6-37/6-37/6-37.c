#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int temp, i;
	int data[16] = { 65,98,1,43,2,5,36,57,84,12,26,59,33,66,74,17 };
	for (i = 1;i < 16;i++) {
		if (data[0] < data[i]) {
			temp = data[0];
			data[0] = data[i];
			data[i] = temp;
		}
	}
	printf("max number is %d", data[0]);
	system("pause");
	return 0;
}