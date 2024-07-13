#include<stdio.h>
int main(){
	int i;
	float marks=5;
	float total=0;
  	float average;
 	printf("Enter marks for 5 subject: ");
  	for(i=0; i<5; i++){
    scanf("%f",&marks);
    total=marks;
	}
	average=total/5;
	printf("The average marks is %.2f\n",average);
}

