#include <stdio.h>
void main() {
	char str1[3] = "yes";
	char str2[3] = "No";
	int x = 0;
	int y = 0;

	for (int i = 0; i <= 3; i++)
	{
		if (str1[i] == str2[i])
		{
			x = 1;
			y = 1;
		}
	}
	printf("%d and %d", x, y);

}