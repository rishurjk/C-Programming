#include <stdio.h>
int main(){
	int marks;
	printf("Enter overall marks(out op 100)\n");
	printf("Enter marks --> ");
	scanf("%d",&marks); 
	
	if(marks >= 81){
		printf("Very Good");
	} else if(marks >= 61){
		printf("Good");
	} else if(marks >= 41){
		printf("Average");
	} else {
		printf("Fail");
	}
}
