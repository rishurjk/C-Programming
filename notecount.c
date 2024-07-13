#include<stdio.h>
int main(){
	int amount;
	int n500=0,n200=0,n100=0,n50=0,n20=0,n10=0,n5=0,n2=0,n1=0;
	
	printf("Enter amount: ");
	scanf("%d", &amount);
	if(amount>=500)
	{
	    n500=amount/500;
	    amount=amount%500;
	}
	if(amount>=200)
	{
	    n200=amount/200;
	    amount=amount%200;
	}
	if(amount>=100)
	{
	    n100=amount/100;
	    amount=amount%100;
	}
	if(amount>=50)
	{
	    n50=amount/50;
	    amount=amount%50;
	}
	if(amount>=20)
	{
	    n20=amount/20;
	    amount=amount%20;
	}
	if(amount>=10)
	{
	    n10=amount/10;
	    amount=amount%10;
	}
	if(amount>=5)
	{
	    n5=amount/5;
	    amount=amount%5;
	}
	if(amount>=2)
	{
		n2=amount/2;
		amount=amount%2;
	}
	if(amount>=1)
	{
		n1=amount;
	}
	printf("\n");
	printf("number of 500 note is: %d \n", n500);
	printf("number of 200 note is: %d \n", n200);
	printf("number of 100 note is: %d \n", n100);
	printf("number of 50 note is: %d \n", n50);
	printf("number of 20 note is: %d \n", n20);
	printf("number of 10 note is: %d \n", n10);
	printf("number of 5 note is: %d \n", n5);
	printf("number of 2 note is: %d \n", n2);
	printf("number of 1 note is: %d \n", n1);
}
