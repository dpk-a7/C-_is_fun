/*
Deepak Avudiappan
Date: 9-1-2021
Aim: create a program that will gift 15 if the person passes maths exam or Physics exam else if the person passes both the exam then gift 45.
*/

#include <stdio.h>

//One Solution
void main() {
	char maths[3];
	char physics[3];
	const char y[3] = "yes";
	int m = 0;
	int p = 0;

	printf("\aHave you passed your Maths Exam?\n");
	scanf("%s", &maths);
	printf("\aHave you passed your Physics Exam?\n");
	scanf("%s", &physics);

	for (int i = 0; i <= 3; i++) {
		if (maths[i] == y[i]) {
			m = 1;
		}
		if (physics[i] == y[i]) {
			p = 1;
		}
	}

	if ((m == 1 && p == 0) || (m == 0 && p == 1)) {
		printf("\aCongratulations you got Rs15!\n");
	}
	else if (m == 1 && p == 1) {
		printf("\aCongratulations you get Rs45!\n");
	}
	else {
		printf("\aBetter next time!\n");
	}
}
/*
Second Solution!
void main() {
	int a, b;
	int m = 0;
	int p = 0;
	printf("\aYour Maths Exam Score?\n");
	scanf("%d", &a);
	printf("\aYour Physics Exam Score?\n");
	scanf("%d", &b);
	if (a < 100 && a >= 0) {
		if (a >= 35) {
			m = 1;
		}
		if (b >= 35) {
			p = 1;
		}
	}
	else {
		printf("Error!");
	}
	if ((m == 1 && p == 0) || (m == 0 && p == 1)) {
		printf("\aCongratulations you got Rs15!\n");
	}
	else if (m == 1 && p == 1) {
		printf("\aCongratulations you get Rs45!\n");
	}
	else {
		printf("\aBetter next time!\n");
	}
}
*/