#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
   int i;

   i = 0;
   while(i < argc) {
	(atoi(argv[i]) % 2) ? printf("%s is even\n", argv[i]) : printf("%s is odd\n", argv[i]);
	i++;
   }
    return 0;
}
