#include <stdio.h>


int main(int argc, char* argv[]) {
  int numbers[4] = { 1 };
  int name[4] = { 'a' };

  // first print them out raw
  printf("Numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);

  printf("Name each: %c %c %c %c\n", name[0], name[1], name[2], name[3]);
  
  printf("name: %s\n", name);


  // Set up numbers
  numbers[0] = 1;
  numbers[1] = 2;
  numbers[2] = 3;
  numbers[3] = 4;

  // Set up the name
  name[0] = 'R';
  name[1] = 'A';
  name[2] = 'Y';
  name[3] = 'A';

  // print them out initialized
  printf("Numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);

  printf("Name: %c %c %c %c\n", name[0], name[1], name[2], name[3]);

	// error comes for string. It's telling to use char*
  return 0;

}
