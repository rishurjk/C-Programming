#include<stdio.h>
int main(){
	int a,b;
	printf("Enter 1st number: ");
	scanf("%d",&a);
	printf("Enter 2nd number: ");
	scanf("%d",&b);
	if(a>b){
		printf("Larger number is: %d", a);
	}
	else if(b>a){
		printf("Larger number is: %d", b);
	}
	else{
		printf("No one is larger number ");
	}
}
