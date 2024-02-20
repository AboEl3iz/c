#include <stdio.h>

int main()
{
	unsigned int rows = 0;
	printf("enter the number of rows : ");
	scanf("%i",&rows);
	for (int i = 0; i < rows; i++) {

		for (int j = 0; j < 2 * (rows - i) - 1; j++) {
			printf(" ");
		}
		for (int k = 0; k < 2 * i + 1; k++) {
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
