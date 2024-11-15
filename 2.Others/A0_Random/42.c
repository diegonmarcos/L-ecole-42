/*	HEADER	*/

#include "include/libft.h"
#include "include/libdnm.h"


char strtol2(unsigned int i, char c) {
	char str[2] = {c, '\0'};
	c = strtol(str, NULL, 16);
	return c;
}

int main() {
    char s[] = {0x76, 0x6F, 0x69, 0x64, 0x20, 0x2A, 0x00};
	char *s2 = ft_strmapi(s, &strtol2);
    printf("%s ft_BER()", s2);
    return 0;
}