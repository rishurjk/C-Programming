#include<stdio.h>
int main(){
	int i,j,n=64;
	for(i=1; i<=4; i++){
		for(j=1; j<=5; j++){
			if(j>=5-i && j<=4){
				printf("%c",n);
			n++;	
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
}
