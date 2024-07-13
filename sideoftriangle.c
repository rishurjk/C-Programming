#include <stdio.h>
int main(){
	int a,b,c;
	printf("Enter three number : ");
	scanf("%d%d%d",&a,&b,&c);
	if(a+b>=c && b+c>=a && c+a>=b){
		printf("yes");
	} else {
		printf("not");
	}
}
