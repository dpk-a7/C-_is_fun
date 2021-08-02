#include <stdio.h>

//void main() {
//	int x;
//	for (int i = 0; i < 10; i++) {
//		printf("%d", i);
//			for (int j = 0; j < 10; j++) {
//				printf("Type any No. And to Exit enter 1 \n");
//					scanf("%d", &x);
//					if (x == 1) {
//						goto End;
//					}
//		}
//	}
//End:
//	printf("Ended!");
//}

// Password: 8108959419

void main() {
	long psw;
	long P = 8108;
	printf("Enter your password:\n");
	scanf("%d", &psw);
	if (psw != P) {
		goto atps;
	}
	else {
		goto End1;
	}
	atps:
		for (int i = 1; i < 6;i++) {
			printf("Attempt-> %d \n", i);
			scanf("%d", &psw);
			if (psw == P) {
				goto End1;
			}
			if ((psw != P) && i == 5) {
				printf("Un");
			}
	}
//pass functions
	End1:
		printf("successful!");
	
}