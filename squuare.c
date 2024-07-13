#include <stdio.h>
int main(){
    double number;
    double result;
    
    printf("Enter a number:");
    scanf("%lf", &number);
    
    result = number * number;
    
    printf("The square of %lf is %lf\n", number, result);
}
