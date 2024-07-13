#include<stdio.h>
int main(){
    int i, j, end, sum;
    printf("Enter upper limit: ");
    scanf("%d", &end);
    printf("All Perfect numbers between 1 to %d:\n", end);
    
    for(i=1; i<end; i++){
        sum = 0;
        // Check whether the current number i is Perfect number or not
        for(j=1; j<i; j++) {
        	if(i % j == 0) {
                sum += j;
            }
        }
        // If the current number i is Perfect number 
        if(sum == i){
            printf("%d ", i);
        }
    }
}

// enter input 1000 then output will be 6, 28, 496....
