#include<stdio.h>

int main ( int argc , char* argv)
{
	int num, revnum, k, rem;

	for (num = 999 ; num <= 999 ; num--)
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
		break;
		}
	}
	printf("%d\n", num);
	return 0;
}
	
