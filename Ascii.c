// Write a program to find the ASCII value of a character.

#include <stdio.h>
int main(){
	char character;
	printf("Enter a character: ");
	scanf("%c", &character);
	int asciivalue = character;
	printf("The ASCII value of '%c' is %d\n", character, asciivalue);
}
