#include <stdio.h>

int main(int argc, char **argv) 
{
    char operator = argv[1][0];
    int num1 = 10, num2 = 5;

    switch (operator) 
	{
        case '+': printf("%d + %d = %d\n", num1, num2, num1 + num2); break;
        case '-': printf("%d - %d = %d\n", num1, num2, num1 - num2); break;
        default : printf("Invalid operator\n"); 
    } 
	return 0;
}