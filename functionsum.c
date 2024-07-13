#include <stdio.h>
int FindSum(int, int);
int main(){
	int var1 = 10;
	int var2 = 20;
	int var3,var4;	
	var3 = FindSum(var1,var2);
	var4 = FindSum(var3,var2);
	printf("%d\n", var3);
	printf("%d\n", var4);
	return 0;
}
int FindSum(int a, int b){
	int c=a+b;
	return c;
}
