#include<stdio.h>
int main() {
	int a, b, c;
	printf("checking if it is right triangle. \n");
	printf("Enter longest side of triangle : ");
	scanf_s("%d", &c);
	printf("Enter other side of triangle : ");
	scanf_s("%d", &a);
	printf("Enter another side of triangle : ");
	scanf_s("%d", &b);
	if ((c * c) == (a * a) + (b * b)) printf("Ahh,it\'s a right triangle.");
	else printf("Oh no!it\'s not a right triangle.");
	return 0;
}