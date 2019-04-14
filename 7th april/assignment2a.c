
#include <stdio.h>
int main( int argc, char* argv[])
{
	float i;
  	i = 1.5;
	switch ( i )
	{
   	case 1.3:
             printf ("Case 1.3");
             break;
   	case 1.4:
             printf ("Case 1.4");
             break;
   	case 1.5:
             printf ("Case 1.5");
             break;
    	default :
             printf ("Default Case ");
	}
 	return 0;
	/* We get compiling error when we declare float value as the operand as well as for the case options. Error says "Case label does not 		reduce to an integer" */
}
