#include <stdio.h>

int main( int argc , char* argv)
{
    int a, b, c, i;

    a = 0;
    b = 1;
    
    for(i=1; i<=100; i++)
    {
        
        c = a + b;
	a = b;
	b = c;

	if ( c > 100){
	break;
	}
	printf ("%d\t", c);
    }
	printf ("\n");
    return 0;
}
