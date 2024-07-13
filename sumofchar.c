#include <stdio.h>
int main(){
	char rollNumber[] = "17040091";
	int sum = 0;
	for (int i = 4; i < 8; i++) {
	sum += rollNumber[i] - '0';
	}
	printf("Sum of the last four digits: %d\n", sum);
}
