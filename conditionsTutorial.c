#include <stdio.h>

int main() {
	int a;
	printf("Enter your age:\n");
	scanf("%d",&a);
	
	if(a<14){
		if (a >= 0) {
			printf("\aYou are a Kid");
		}
		else {
			printf("\aError!");
		}
	}
	else if (a <= 20 && a >= 14) {
		printf("\aYou are Teenager");
	}
	else if (a >= 20 && a <= 50) {
		printf("\aYou are Adult");
	}
	else if (a >= 50) {
		if (a < 200) {
			printf("\aYou are Wise citizen!");
		}
		else {
			printf("\aError!");
		}
	}
	else{
		printf("\aError!");
	}

}