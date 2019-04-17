#include<stdio.h>

int main ( int argc , char* argv)
{
	int num, rem, k, revnum=0;
	printf ("Enter a number:");
	scanf ("%d", &k);
	
	num = k;

	while (k != 0)
	{
		rem = k % 10;
		revnum = revnum*10 + rem;
		k = k/10;
	}
	if (num == revnum)
		printf ("%d number is palindrome\n", num);
	else 
		printf ("%d number is not a palindrome\n", num);

	return 0;
}
