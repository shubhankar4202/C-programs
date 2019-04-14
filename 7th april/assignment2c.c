#include <stdio.h>
int main(int argc, char* argv[]) {

	char operand = 'u';
	if (operand == 'a' || operand == 'e' || operand == 'i' || operand == 'o' || operand == 'u' || operand == 'A' || operand == 'E' || 		operand == 'I' || operand == 'O' || operand == 'W'){
		printf ("It is a vowel\n");
	}
	else {
		printf ("It is not a vowel\n");
	}
	return 0;
}

