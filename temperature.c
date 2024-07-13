#include<stdio.h>
int main(){
	float celcius,fahrenheit;
	printf("Enter tempreture in fahrenheit: ");
	scanf("%f",&fahrenheit);
	celcius=(fahrenheit-32)*5/9;
	printf("Tempreture in celcius: %f\n",celcius);	
}
