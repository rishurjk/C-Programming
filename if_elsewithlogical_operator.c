#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(){
	char input[100];
	printf("Enter a number: ");
	scanf("%s",&input);
	
	for(int i = 0; input[i] != '\0'; i++){
		if(!isdigit(input[i]) && (i != 0 || input[i] != '-')){
			printf("Number is Integer.\n");
		}
	}
	printf("Integer detected.\n")
}
