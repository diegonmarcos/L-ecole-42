
#include <unistd.h>
#include <stdio.h>

void	ft_printf(int i){
	void parse(int i){ 
		(i > 9) ? (parse(i / 10)): NULL;
		char d = i % 10 + '0'; write(1, &d, 1);
	}
	parse(i), write(1, "\n", 1);
}

void fizzbuzz(int n){
	(n % 3 == 0 && n % 5  == 0) ? write(1, "fizzbuzz\n", 9) : 
		(n % 3 == 0) ? write(1, "fizz\n", 5) :
			(n % 5 == 0) ? write(1, "buzz\n", 5) : 
			ft_printf(n);
	return;
}

int main (void)
{
	for(int i = 1; i < 101; i++)
		fizzbuzz(i);
	return 0;
}

