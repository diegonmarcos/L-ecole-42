/* 
This a tester for the implementation of printf
*/

#include "my_headers.h"
#include <stdio.h>
#include <string.h>

int main (void)
{
	printf("\n ------------------------\n");
	printf(" --- TESTS FOR PRINTF ---\n");
	printf(" ------------------------\n");

	//TEST 1
	char str[] = "Hello";
	printf("(%d) | ", printf("Expected:%s",str) - 9) == ft_printf("(%d) | ",ft_printf("Test:%s",str) - 5) ? printf("OK\n") : printf("KO\n");
	//TEST 2
	char str1[] = "Hello\\t!";
	printf("(%d) | ", printf("Expected:%s",str1) - 9) == ft_printf("(%d) | ",ft_printf("Test:%s",str1) - 5) ? printf("OK\n") : printf("KO\n");
	//TEST 1
	char str2[] = " ";
	printf("(%d) | ", printf("Expected:%s",str2) - 9) == ft_printf("(%d) | ",ft_printf("Test:%s",str2) - 5) ? printf("OK\n") : printf("KO\n");
	//TEST 1
	char *ptr;
	ptr = (char *) malloc(10 * sizeof(char));
	strcpy(ptr, "Hello");
	printf("%s\n", ptr);
	return 0;
}