#include<stdio.h>
int main(){
	int n;
	printf("Enter the number for table: ");
	scanf("%d",&n);
	printf("Table of %d is :- \n",n);
	for(int i=1; i<=10; i++){
		printf("%d * %d = %d\n",n,i,n*i);
	}
}
