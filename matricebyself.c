#include<stdio.h>
int main(){
	int numbers[9];
	printf("Enter nine integers: ");
	
	for(int i = 0; i < 9; i++){
		scanf("%d", &numbers[i]);
	}
	
	for(int j = 0; j < 9; j++){
		printf("%d", numbers[i]);
		
		if (i % 3 != 2){
			printf(" ");
		}
		else {
			printf("\n");
		}
	}
}
