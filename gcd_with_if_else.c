#include <stdio.h>
// Function to calculate the GCD using the Euclidean algorithm
int gcd(int a, int b){
    if (b == 0) {
        return a;
    }
    return gcd(b, a%b);
}
int main(){
    int num1, num2;
    
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 <= 0 || num2 <= 0) {
        printf("Please enter two positive integers...\n");
    } else {
        int result = gcd(num1, num2);
        printf("The GCD of %d and %d is %d\n", num1, num2, result);
    }
}
