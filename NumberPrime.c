#include<stdio.h>
#include<stdbool.h>
int main(){
    int n,i;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
bool isPrime(int n){
    if(n<=1){
        return false; // 1 and non-positive numbers are not prime
    }
    if(n<=3) {
        return true; // 2 and 3 are prime
    }
	// Check for divisibility by numbers from 2 to the square root of n
    for(int i=2; i*i <= n; i++){
        if(n%i==0){
            return false; // n is divisible by a number other than 1 and itself
        }
    }

    return true; // n is prime
}
    if(isPrime(n)){
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }
}
