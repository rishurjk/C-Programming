#include<stdio.h>
int main(){
	int mark1,mark2,mark3,lowestmarks;
	printf("Enter the marks for three students: ");
	scanf("%d %d %d",&mark1,&mark2,&mark3);
	lowestmarks= (mark1<mark2) ? ((mark1<mark3) ? mark1:mark3) : ((mark2<mark3) ? mark2:mark3);
	printf("Lowest mark is: %d",lowestmarks);
}


// #include<stdio.h>
// int main(){
//	int s1,s2,s3,lowestmarks;
//	printf("Marks of student 1: ");
//	scanf("%d",&s1);
//	printf("Marks of student 2: ");
//	scanf("%d",&s2);
//	printf("Marks of student 3: ");
//	scanf("%d",&s3);
//	lowestmarks = (s1<s2) ? ((s1<s3) ? s1:s3) : ((s2<s3) ? s2:s3);
//	printf("The lowest marks among the three students is: %d",lowestmarks);
