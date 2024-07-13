#include<stdio.h>
int main(){
	float radius,circumference;
	printf("Enter the radius of circle(in mtr): ");
	scanf("%f",&radius);
	circumference = 2 * (22.0/7) * radius;
	printf ("radius = %.f, circumference = %0.2f\n", radius, circumference);
}
