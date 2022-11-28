#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
	int temp, i, len;
	char str[40];
	printf("input string:");
	scanf("%s", str);
	len = strlen(str);
	for (i = 0;i < len / 2;i++) {
		temp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = temp;
	}
	printf("reverse %s", str);
	system("pause");
	return 0;
}
