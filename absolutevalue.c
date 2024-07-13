#include<stdio.h>
int main(){
	int x, absoluteValue;
	printf("Enter an integer: ");
	scanf("%d",&x);
	if(x<0){
		absoluteValue = -x;
	} else {
		absoluteValue = x;
	}
	printf("The absolute value of %d is %d.\n",x,absoluteValue);
}
