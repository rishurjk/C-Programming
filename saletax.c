#include<stdio.h>
int main(){
	float originalprice, tax, totalPrice;
	printf("Enter the original price of the product: RS ");
	scanf("%f", &originalprice);
	printf("Enter the sales tax rate(in percentage): ");
	scanf("%f", &tax);
	totalPrice = originalprice + (originalprice * (tax / 100));
	printf("The total price after adding sale tax is: RS%.2f \n", totalPrice);
}
