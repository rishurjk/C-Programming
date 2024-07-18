#include<stdio.h>
int main(){
	float a,r;
	printf("Enter the radius of the circle: ");
	scanf("%f",&r);
	a=3.14*(r*r);
	printf("Area of circle is: %.2f ",a);
	return 0;
}
