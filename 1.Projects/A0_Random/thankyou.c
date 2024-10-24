#include <stdio.h> 

int main()  
 { 
  char *Learning[] =  
  { 
    "to learn", 
    "to ask for help 🎈", 
    "to help", 
    "to (miserable) fail on all of it 😭", 
    "to give yourself a chance", 
    "that first, you address the pointer to the beginning. Then, the loop of interactions gets things moving. 🫶🏽", 
	"then to say THANK YOU! =) ", 
    NULL 
   }; 

  char **ptr = Learning; 
  while (*ptr)  
 {  
    printf("Learning %s\n", *ptr);  
    ptr++; 
  } 

  printf("\n  42   42  \n"); 
  printf(" 4  4 2  4 \n"); 
  printf(" 2   4   2 \n"); 
  printf("  4     4  \n"); 
  printf("   2   2   \n"); 
  printf("    4 2    \n"); 
  printf("     4     \n"); 

  return 0;
}