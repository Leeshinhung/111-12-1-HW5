#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int a; 
	int *aPtr;
	a = 7l;
	aPtr = &a;
	printf("The addres of a is %p\nThe value of aPtr is %p", &a, aPtr);
	printf("\n\nThe value of a is %p\nThe value of *aPtr is %p", a, *aPtr);
	printf("\n\nShowing that * and & "
		"are complements of each other \n&"
		"*aPtr = %p\n*&aPtr = %p\n",&*aPtr,*&aPtr);
	system("pause");
	return 0;
}