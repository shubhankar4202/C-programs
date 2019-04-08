#include<stdio.h>
int main( int argc, char* argv[])
{
	int i;
	i = 1;
	switch ( i )
	{
	case 1:
	    printf ("Case 1");
	    break;
	case 1:
	    printf ("Case 2");
	    break;
	case 3:
	    printf ("Case 3");
	    break;
	default :
	    printf ("Default Case ");
	}
	return 0;
	// Compilation error occurs due to duplication of same switch condition
}
