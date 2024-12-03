#include <stdio.h>

int main (void)
{
	int i = 5;
	while (i > 0)
	{
		printf("i = %d\n", i);
		i--;
	}
	i = 5;
	while (i-- > 0)
		printf("j = %d\n", i + 1);
}
