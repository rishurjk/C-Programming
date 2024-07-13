#include <stdio.h>
int mult(int a, int b) {
	int i;
	int sum = 0;
	for (i = 1; i <= a; i++)
	sum = sum + b;
	return sum;
}
int main () {
	int x, y;
	printf ("input two integers (positive): ");
	scanf ("%d %d", &x, &y);
	printf ("Product of %d and %d is %d\n",x, y, mult(x,y));
	return 0;
}
// output -:
