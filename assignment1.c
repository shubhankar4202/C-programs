#include<stdio.h>
int main( int argc, char* argv[])
{
	int i;
	for (i=1 ; i <= 100 ; i++)
	{ 
        if ((i % 3 == 0) && (i % 5 == 0)){
		printf ("FizzBuzz\t");
	}
        else if (i % 3 == 0){
		printf ("Fizz\t");
	}
	else if(i % 5 == 0){
		printf ("Buzz\t");
	}
	else
		printf ("%d\t", i);
	}
        }
	return 0;
} 
/* init
 status
add
commit
branch
dif
checkout -b
merge 
*\
