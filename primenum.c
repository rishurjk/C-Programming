#include<stdio.h>  
int main(){
	int n,i,c,sum=0;
	printf("Enter number: ");
	scanf("%d",&n);
	for(i = 1; i <= n/2; i++)
	{
		if(n % i == 0)
		{
			c=1;
			break;
		}
	}
	if(c==0){
		printf("It's a prime number");
	}
	else
	{
		printf("It's not a prime number");
	}
}
