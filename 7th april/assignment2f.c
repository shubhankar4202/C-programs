#include <stdio.h>
 
int main()
{
    int i, size;
    char name[] = {'s','h','u','b','h','a','n','k','a','r'}; 
    size = sizeof(name);
    
	for (i=1 ; i <= size ; i++)
	{    
		switch(name[i-1])
		{
		    case 'A':
		    case 'E':
		    case 'I':
		    case 'O':
		    case 'U':
		    case 'a':
		    case 'e':
		    case 'i':
		    case 'o':
		    case 'u':
		        printf("%c is a VOWEL.\n",name[i-1]);
		        break;
		    default:
		        printf("%c is a CONSONANT.\n",name[i-1]);            
		}
	}
        return 0;
}
