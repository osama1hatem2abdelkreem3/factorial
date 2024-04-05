#include<stdio.h>
int main() {
	int x;
	int factorial = 1;

	printf("please enter number"); // requist massage
	scanf("%d", &x); //get the x
	if (x > 0) {// condition
		while (x > 0) {// make the factorial
			factorial = x * (factorial);
			x--;
		}
		printf("the factorial = %d", factorial);
	}
	else if (x == 0)
	{
		printf("the factorial = %d", factorial = 1);
	}
	else {
		printf("Input error");
	}


}