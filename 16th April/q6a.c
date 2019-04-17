#include <stdio.h>
 
int main (int argc , char* argv)
{
	int a, b;
   
	printf("Input two integers a & b to swap\n");
	scanf("%d%d", &a, &b);
   
		a = a + b;
		b = a - b;
		a = a - b;
 
	printf("a = %d\nb = %d\n",a,b);
	return 0;
	// swapping without 3rd variable
}
