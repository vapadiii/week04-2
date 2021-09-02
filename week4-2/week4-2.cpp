#include<stdio.h>
int main() {
	int num1, num2, num3, max;
	int a, b, c;
	int y;

	printf("input num1 : ");
	scanf("%d", &num1);
	printf("input num2 : ");
	scanf("%d", &num2);
	printf("input num3 : ");
	scanf("%d", &num3);

	a = num1 + num2;
	b = num2 + num3;
	c = num1 + num3;

	if (a > b) {
		max = a;
		y = 1;
		if (a > c) {
			max = a;
			y = 1;
		}
		else {
			max = c;
			y = 3;
		}
	}
	else
	{ //num2>num1
		if (b > c) {
			max = b;
			y = 2;
		}
		else {
			max = c;
			y = 3;
		}
	}

	printf("most combined is ");

	switch (y)
	{
	case 1:
		printf("%d + %d", num1, num2);
		break;
	case 2:
		printf("%d + %d", num2, num3);
		break;
	default:
		printf("%d + %d", num1, num3);
		break;
	}

	/*if (y == 1) {
		printf("%d + %d", num1, num2);
	}
	else if (y == 2) {
		printf("%d + %d", num2, num3);
	}
	else {
		printf("%d + %d", num1, num3);
	}*/

	printf("\nmax = %d", max);
	getch();
	return 0;
}