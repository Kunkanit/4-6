#include <stdio.h>
int Even_odd(int num) {
	
	if ((num % 2) == 0 || num == 0) {
		return 0;
	}
	else if (num % 2 != 0) {
		return 1;
	}
	else {
		return 2;
	}
}
 int main() {
	int x;
	scanf_s("%d", &x);
	int even_odd = Even_odd(x);
	if (even_odd == 0) {
		printf("%d is even", x);
	}
	else if (even_odd == 1) {
		printf("%d is odd", x);
	}
	else {
		printf("Error");
	}

	return 0;
}
