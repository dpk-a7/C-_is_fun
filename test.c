#include <stdio.h>

char a[] = "happys";
int length;

void main() {
	length = sizeof(a) / sizeof(char)-1;
	printf("%d", length);
}