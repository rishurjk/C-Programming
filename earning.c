#include<stdio.h>
int main(){
	float hourlyWage, weeklyWage;
	int hoursWorked;
	printf("Enter the hourly wage: RS ");
	scanf("%f", & hourlyWage);
	printf("Enter the number of hours worked in a week: ");
	scanf("%d", & hoursWorked);
	if(hoursWorked>30){
		weeklyWage=30*hourlyWage;
		weeklyWage+=(hoursWorked-30)*(2*hourlyWage);
	}
	else{
		weeklyWage = hoursWorked * hourlyWage;
		}
		printf("The weekly wage is: RS %.2f\n", weeklyWage);
		return 0;
}
