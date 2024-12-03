/* 
This a tester for the implementation of printf
*/

#include "/../incl/my_headers.h"
#include <stdio.h>
#include <string.h>

int main (void)
{
	//TEST 1
	char str[] = "Hello";
	printf("%s\n", str) == ft_printf("%s\n", str) ? "OK\n" : "KO\n";

	return 0;
}