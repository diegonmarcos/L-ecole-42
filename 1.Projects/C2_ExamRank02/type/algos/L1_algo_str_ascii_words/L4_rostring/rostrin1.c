#include<unistd.h>

int main(int argc, char **argv){
	char *str = argv[1];
	
	if(argc < 2)
		return(write(1, "\n", 1), 0);

	while(*str == ' ' || *str == '\t')
			str++;
	while(*str != ' ' && *str != '\t' && *str)
			str++;
	while(*str == ' ' || *str == '\t')
			str++;
	while(*str){
		while(*str != ' ' && *str != '\t' && *str){
			write(1, str, 1); str++;}
		write(1, " ", 1);
		while(*str == ' ' || *str == '\t')
			str++;
	}
	str = argv[1];
	while(*str == ' ' || *str == '\t')
		str++;
	while(*str != ' ' && *str != '\t' && *str){
		write(1, str, 1); str++;}
	write(1, "\n", 1);
	return 0;
}