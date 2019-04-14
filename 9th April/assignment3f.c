#include <stdio.h>

int main(int argc, char* argv[]) {

	int i, a[10];
	for (i=0 ; i < 10 ; i++){
		a[i]= i+1;
	}
	printf("The elements of a given array are\n");
        for (i = 0; i < 10; i++){
            printf( "%d\n", a[i]);
	}
	return 0;
}
