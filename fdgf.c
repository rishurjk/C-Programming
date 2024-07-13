#include<stdio.h>
int main(){
	int n;
	printf("Enter a positive integer: ");
	scanf("%d",&n);
	if(n%5 == 0) {
		printf("%d is divisible by 5.\n",n,n);
	} else {
		printf("%d is not divisible by 5.\n",n,n);
	}
}
