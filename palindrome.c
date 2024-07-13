#include<stdio.h>
int main(){
	int n,r,rev=0,t;
	t=n;
	scanf("%d",&n);
	while(n>0) {
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	printf("%d ",rev);
	if (rev==t) {
		printf("this is a palindrome number");
	} else {
		printf("this is not a palindrome number");
	}
}
