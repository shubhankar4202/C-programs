#include<stdio.h>

int main ( int argc , char* argv)
{
	int num, rem, k, revnum;

	for (num=100 ; num <= 999 ; num++)
	{
		k = num;
		revnum = 0;
		while (k != 0)
		{
			rem = k % 10;
			revnum = revnum*10 + rem;
			k = k/10;
		}
		if (num == revnum){
		printf ("%d\t", num);
		}
	}
	printf ("\n");
	return 0;
}

