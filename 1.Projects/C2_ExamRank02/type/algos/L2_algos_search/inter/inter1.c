#include<unistd.h>

int main (int argc, char ** argv){

	(void)argc;
	int i = 0;
	int j;
	int seen[126] = {0};
	while(argv[1][i]){
		j = 0;
		while(argv[2][j]){
			if(argv[1][i] == argv[2][j] && !seen[(int)argv[1][i]]){
				write(1, &argv[1][i], 1); seen[(int)argv[1][i]] = 1;}
			j++;
		}
		i++;
	}
	write(1, "\n", 1);
	return 0;
}