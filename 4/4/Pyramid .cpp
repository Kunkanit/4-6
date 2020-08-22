#include<stdio.h>
int main() {
	int x, y, i, num;
	printf("Enter number :");
	scanf_s("%d", &num);
	for (x = 1; x <= num; x++) {
		for (y = 1; y <= (num - x); y++) 
			printf(" ");
		for (i = 1; i <= ((2 * x) - 1); i++)
			printf("*");
		

		printf("\n");
	}



	return 0;
}