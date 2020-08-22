#include<stdio.h>
int main() {
	int row,col;
	for (row =0;row<= 2; row++) {
		for (col = 1; col <= 20; col++) {
			if (col >= 4 - row && col <= 6 + row) 
				printf("x");
			else if(col >= 13 - row && col <= 15 + row)
				printf("x");
			else
				printf(" ");
		}
	

		printf("\n");
	}
	for (row = 0; row <= 10; row++) {
		for (col = 1; col <= 20; col++) {
			if(col>=row+1&&col<=18-row)
				printf("x");
			else
				printf(" ");

		}printf("\n");
	}

	return 0;
}