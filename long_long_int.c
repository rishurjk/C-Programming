#include <stdio.h>
int main() {
	long long int mobileNumber;
	printf("Enter your 10-digit mobile number: ");
	scanf("%lld", &mobileNumber);
	if (mobileNumber >= 1000000000 && mobileNumber <= 9955814580){
	printf("Your mobile number is: %lld\n", mobileNumber);
	} else {
		printf("Invalid input. Please enter a 10-digit mobile number.\n");
	}
}
