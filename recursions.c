#include <stdio.h>

//Finbonacci recursion
/*
This program can print factorial upto int 31!
 i.e 738197504 as output max!
*/
int fact(int num) {
	if (num == 1 || num == 0) {
		return 1;
	}
	else {
		return (num * fact(num - 1));
	}
}


int main() {
	int n;
	printf("Enter number for factorial: ");
	scanf("%d", &n);
	printf("\nFactorial of %d is %d",n,fact(n));
	return 0;
}