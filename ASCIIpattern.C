#include<stdio.h>
int main(){
	int i,j,n=64;
	for(i=1; i<=5; i++){
	n++;
	for(j=1; j<=5; j++){
		if(j>=1 && j<=i){
			printf("%c",n);
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
}
