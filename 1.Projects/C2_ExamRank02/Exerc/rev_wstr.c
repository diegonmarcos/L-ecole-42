#include <unistd.h>

int is_space(char str){
	return(str == ' ' || str == '\t');}

int is_printable(char str){
	return(str > 32 && str < 127);}

void print_word(char *str, int len){
	while(len > 0){
		write(1, str++, 1);
		len--;
	}
}

int main (int argc, char **argv){
	if(argc != 2)
		return(write(1, "\n", 1), 0);
	
	char *str = argv[1];
	int len = 0;
	int end = 0;
	int start = 0;

	while(*str){
		str++;
		len++;
	}
	str--;
	while(len > 0){
		while(is_space(*str)){
		str++;
		len--;}
		while(is_printable(*str--)){
			len++;
			len--;}
		print_word(str, len);
		write(1, " ", 1);
		end = start;
	}
}