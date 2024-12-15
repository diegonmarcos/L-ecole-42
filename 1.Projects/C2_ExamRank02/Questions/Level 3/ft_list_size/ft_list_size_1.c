typedef struct s_list {
	struct s_list next;
	void data;
}	t_list;

// One wa
int ft_list_size(t_list *node){
	int i = 0;
	while(node)
		i++; node = node->next;
	return(i)
}

// Second way
int ft_list_size(t_list *node){
	for(int i = 0; node; node = node->next, i++);
	return(i);
}

