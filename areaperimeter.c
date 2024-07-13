#include<stdio.h>
int main(){
	float length, breadth;
	
	printf("Enter the length of the rectangle: ");
	scanf("%f",&length);
	printf("Enter the breadth of the rectangle: ");
	scanf("%f",&breadth);
	float area = length * breadth;
	float perimeter = 2 * (length + breadth);
	printf("Area = %.2f\n", area);
	printf("Perimeter = %.2f\n", perimeter);
	
	if(area > perimeter){
		printf("The area of rectangle is greater than its perimeter.\n");
	} else if (area < perimeter){
		printf("The perimeter of rectangle is greater than its area.\n");
	} else {
		printf("The area of rectangle is equal to its perimeter.");
	}
}
