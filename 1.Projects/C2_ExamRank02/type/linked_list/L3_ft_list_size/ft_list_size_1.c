#########################
// # Linked Lists - Size
// metadata
// documentation

#########################
// # HEADERS1

Def S1 0
S1o ""
S2c ""
Def S2 1
S2o "/*"
S2c "*/"
#########################
// # HEADERS2

#include <unistd.h>
typedef struct s_list {
	struct s_list next;
	void data;
}	t_list;

#########################
// # SRC

//   ##UTILS
void print_bits(unsigned char octet){
}

//   ##MAIN 

// One way S1o
 int ft_list_size(t_list *node){
 	int i = 0;
 while(node)
	  i++; node = node->next;
	return(i)
}S1c

// Second way S2o
int ft_list_size(t_list *node){
	for(int i = 0; node; node = node->next, i++);
	return(i);
}S2c

#########################

