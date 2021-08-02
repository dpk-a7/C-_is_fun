#include <stdio.h>

int fibo(int X) {
	if (X == 1 || X == 2){
		printf("%d \n", X);
		goto End;
	}
	else {
		printf("%d \n", X);
		return (fibo(X) - fibo(X - 1));
	}
End:
	printf("End!");
}



void main() {
	int val;
	printf("Enter the value for fibonacci sequence: ");
	scanf("%d", &val);
	fibo(val);
}