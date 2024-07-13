#include<stdio.h>
int main(){
	int n,i;
	printf("Enter the number of terms : ");
	scanf("%d",&n);
	printf("the first %d terms of the AP sequence are:\n",n);
	for(i=0; i<n; ++i){
		printf("%d ",4+i*3);
	}
}
