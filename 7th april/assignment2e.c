#include <stdio.h>

int main() {
   char j[100] = {'s','H','u','b','H','A','n','k','a','R'};
   int i;
      
   for (i = 0; j[i]!='\0'; i++) {
      if(j[i] >= 'A' && j[i] <= 'Z') {
         j[i] = j[i] + 32;
      }
   }
   printf("\nString in Lower Case = %s\n", j);
   return 0;
}
