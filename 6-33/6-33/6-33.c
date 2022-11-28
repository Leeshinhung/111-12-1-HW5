#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int binarysearch(int[], int, int);
int main(void) {
	int search, ans;
	int data[] = { 2,6,8,9,14,23,32,41,48,56,75,79,82,87,92,97 };
	printf("所有字串 2,6,8,9,14,23,32,41,48,56,75,79,82,87,92,97\n");
	printf("輸入1-99其中一個數字");
	scanf("%d", &search);
	ans = binarysearch(data, search, sizeof(data) / sizeof(int));
	if (ans < 0) {
		printf("not found %d\n", search);
	}
	else {
		printf("在第 %d 筆資料找到 %d\n", ans + 1, search);
	}
	system("pause");
}
int binarysearch(int data[], int search, int n) {
	int low = 0, high = n - 1;
	while (low <= high) {
		int mid = (low + high) / 2;
		if (data[mid] == search) {
			return mid;
		}
		else if (data[mid] > search) {
			high = mid - 1;
		}
		else if (data[mid] < search) {
			low = mid + 1;
		}
	}
	return -1;
}