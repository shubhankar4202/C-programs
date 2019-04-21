#include <stdio.h>

int main(int argc, char *argv[]) {
  if(argc < 2) {
    printf("ERROR: You need one argument.\n");
    //this is how you abort a  program.
    return 1;
  }

  int  i = 0;
  int j = 1;
  int length = 0;
  for(i = 1; i < argc; i++) {
    printf("%s: ", argv[i]);
    // length = sizeof(argv[i]);
    // printf("%d\n", length);
  }
  for(i = 1; i < argc; i++) {
    // argv[i][j] != '\0';
    //length = sizeof(argv[i]);
    for(j = 0; argv[i][j] != '\0'; j++) {
      char letter = argv[i][j];
      if (letter == 'a' || letter == 'A')
          printf("%d: 'A'\n", j);
      else if (letter == 'e' || letter == 'E')
          printf("%d: 'E'\n", j);
      else if (letter == 'i' || letter == 'I')
          printf("%d: 'I'\n", j);
      else if (letter == 'o' || letter == 'O')
          printf("%d: 'O'\n", j);
      else if (letter == 'u' || letter == 'U')
          printf("%d: 'U'\n", j);
      else if (letter == 'y' || letter == 'Y'){
          if(i > 2) {
            // it's only sometimes Y
            printf("%d: 'Y'\n", j);
          }
          }
      else 
          printf("%d: %c is not a vowel\n", j, letter);
      
    }
  }

  return 0;
}
