#define _CRT_SECURE_NO_WARNINNGS
#include<stdio.h>
int main() {
	int x;
	int factorial;

	printf("please enter number"); // requist massage
	scanf("%d", &x); //get the x
	if (x > 0) {// condition
		while (factorial > 0) {// make the factorial
			factorial = x * (x - 1);
		}
		printf("the factorial = %d", factorial);
	}
	else if (x = 0)
	{
		printf("the factorial = %d", factorial = 1);
	}
	else {
		printf("Input error");
	}


}