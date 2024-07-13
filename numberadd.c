#include<stdio.h>
//0 1 1 2 3 5 8 13 21 34 55......
int main(){
	int i, n1=0, n2=1, n3;
	printf(" %d %d", n1, n2);
	for(i=1; i<=10; i++){
		n3=n1+n2;
		printf(" %d", n3);
		n1=n2;
		n2=n3;
	}
}
