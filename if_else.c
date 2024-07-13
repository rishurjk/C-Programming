#include<stdio.h>
int main(){
	int x;
	printf("Enter a positive integer : ");
	scanf("%d",&x);
	
	if(x > 99 && x < 1000){
		printf("This is a three digit number.\n");
	} else {
		printf("Please enter three digit number");
	}
}
