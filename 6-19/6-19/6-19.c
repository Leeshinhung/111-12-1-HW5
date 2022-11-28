#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int t, d1, d2;
	int cal[11] = { 0 };
	srand(time(0));
	for (int i = 0;i < 36000;i++) {
		d1 = rand() % 6 + 1;
		d2 = rand() % 6 + 1;
		t = d1 + d2;
		t -= 2;
		cal[t] += 1;
	}
	for (int i = 0;i < 11;i++) {
		printf("%d %d\n", i + 2, cal[i]);
	}

	system("pause");
	return 0;
}