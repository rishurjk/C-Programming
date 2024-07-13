#include <stdio.h>
int GCD (int m, int n) {
	int rem;
	do {
		rem = m % n;
		m = n;
		n = rem;
	} 
	while (rem != 0);
	return m; 
}
int main (){
	int x, y, gcd;
	printf ("input two non-zero positive integers: ");
	scanf ("%d %d", &x, &y);
	gcd = GCD (x, y);
	if (gcd == 1)
	printf ("%d and %d are coprime.\n", x, y);
	else
	printf ("%d and %d are not coprime.\n", x, y);
}

/*  input --> 8 9 
	output --> 8 and 9 are coprime.
	input --> 21 14 
	output --> 21 and 14 are not coprime. */
	
