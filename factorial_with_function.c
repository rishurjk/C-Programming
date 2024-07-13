#include<stdio.h>
int fact(int);
int main() {
	int x, y;
	printf("Enter a number: ");
	scanf("%d", &x);
	y = fact(x);
	printf("%d\n",y);
}
int fact(int n) {
	int i = 1;
	while(n>0) {
		i = i * n;		
		n--;
	}
	return i;
}
