#include<stdio.h>
#define CM_TO_INCH 0.393701
#define MTR_TO_MM 1000 //meter to milimeter
#define KG_TO_POUND 2.20462
#define KG_TO_Q 0.01      // Kg to Quintal
//#const float height_cm = 180.0;
//#const float weight_kg = 90.0;
int main(){
	float height_cm,height_mtr,weight_kg;
	printf("Enter the height(in cm): ");
	scanf("%f",&height_cm);
	float height_inch = height_cm * CM_TO_INCH;
	printf("Height: %.2f cm = %.2f inches\n", height_cm, height_inch);
	
	printf("Enter the weight(in kg): ");
	scanf("%f",&weight_kg);
	float weight_pound = weight_kg * KG_TO_POUND;
	printf("Weight: %.2f kg = %.2f pounds\n", weight_kg, weight_pound);
	
	printf("Enter the height(in meter): ");
	scanf("%f",&height_mtr);
	float height_mm = height_mtr * MTR_TO_MM;
	printf("Height: %.2f meter = %.2f miles\n", height_mtr, height_mm);
	
	printf("Enter the weight(in kg): ");
	scanf("%f",&weight_kg);
	float weight_q = weight_kg * KG_TO_Q;
	printf("Weight: %.2f kg = %.2f Quintals\n", weight_kg, weight_q);
}

