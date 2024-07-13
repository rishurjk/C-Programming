#include<stdio.h>
int main(){
	float p,r,t,si;
	printf("Enter the principal amount: ");
	scanf("%f",&p);
	
	printf("Enter the rate of interest: ");
	scanf("%f",&r);
	
	printf("Enter the time in year: ");
	scanf("%f",&t);
	
	si = (p*r*t)/100;
	printf("Simple interest = %.2f",si);
}
