//check number is perfect or not...

#include<stdio.h>  
int main(){
	int n,i,sum=0;
	printf("Enter number: ");
	scanf("%d",&n);
	for(i=1; i<n; i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
	}
	if(sum==n)
	{
		printf("It's a perfect number");
	}
	else
	{
		printf("It's not a perfect number");
	}
}
