/* 
This a tester for the implementation of printf
*/

#include "ft_printf.h"
#include <stdio.h>
#include <string.h>

int main (void)
{
	char str[] = "Hello";
	printf("%s\n", str);
	ft_printf("%s\n", str);

	return 0;
}