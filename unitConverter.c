#include <stdio.h>
//#define mile 1.609      // km/1.609 = mile
//#define foot 12         // inch/12 = foot
//#define inch 2.54       // cm/2.54 = inch
//#define kg 2.205        // pound/2.205 = kg
//#define meter 39.37     // inch/39.37 = meter

int operats(char val[]) {
	char m[4] = "mile";
	char f[4] = "foot";
	char in[4] = "inch";
	char k[2] = "kg";
	char mt[5] = "meter";
	//int length = (sizeof(val) / sizeof(char));
	int length;
	for (int i = 0; val[i] != '\0'; i++) { // array always allocates '\0' as the escape character in all the elements that are not occupied by some value in C.
		length = i+1;
	}
	switch (length) {
	case (2):
		for (int i = 0;i < 2;i++) {
			if (val[i] == k[i]) {
				return 1;
			}
		}
		break;
	case (4):
		for (int i = 0;i < 4;i++) {
			if (val[i] == m[i]) {
				return 2;
			}
			else if (val[i] == f[i]) {
				return 3;
			}
			else if (val[i] == in[i]) {
				return 4;
			}
		}
		break;
	case (5):
		for (int i = 0;i < 5; i++) {
			if (val[i] == mt[i]) {
				return 5;
			}
		}
		break;
	default:
		return 0;
		break;
	}
} 

void main() {
	char op[5];
	float x;
	printf("Enter operation:\n"); 
	scanf("%s", &op);
	printf("conversion Number:\n"); 
	scanf("%f", &x);
	switch (operats(op)) {
	case (1):
		printf("%f\n", x / 2.205);
		break;
	case (2):
		printf("%f\n", x / 1.609);
		break;
	case (3):
		printf("%f\n", x / 12);
		break;
	case (4):
		printf("%f\n", x / 2.54);
		break;
	case (5):
		printf("%f\n", x / 39.37);
		break;
	default:
		printf("Error!\n");
		break;
	}
}