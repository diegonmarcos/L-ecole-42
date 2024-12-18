#include <unistd.h>
#include <stdio.h>

void print_bits(unsigned char octet)
{
	int i = 8;
	unsigned char 	bit;

	while (i--)
	{
		bit = (octet >> i & 1) + '0';
		write(1, &bit, 1);
	}
}

unsigned char	reverse_bits(unsigned char octet)
{
	int		i = 8;
	unsigned char	res = 0;

	while (i--)
	{
		res = (res << 1) + (octet & 1); 					// res * 2 == res << 1 // es |= (octet & 1) << i;
		octet = octet >> 1; 								// octet /2 == octet >> 1 // octet >>= 1;
	}
	return (res);
}

int main (){
	unsigned char octet = 8;
	print_bits(octet); printf("(%d)",octet);
	printf("\n");
	print_bits(reverse_bits(octet)); printf("(%d)", reverse_bits(octet));
	return 0;
}