#include <stdio.h>

int main( int argc , char* argv) 
{
   int n,i,j,k;

   n = 6;   

   for(i = 1; i <= n; i++) 
   {
      for(j = 1; j <= n-i; j++)
      {
         printf(" ");
      }

      for(k = 1; k <= i; k++)
      {
         printf("* ");
      }

      printf("\n");
   }
   return 0;
}
