/*
typedef struct s_list t_list;

struct s_list
{
	int     data;
	t_list  *next;
};
*/

#include <stdlib.h>
#include "sort_list.list.h"
#include<stdio.h>

// UTILS FUNC
//#########################################################
int ascending(int a, int b)
{
	return (a <= b);
}

void print_list(t_list *lst) {
    while (lst != NULL) {
        printf("%d -> ", lst->data);
        lst = lst->next;
    }
    printf("NULL\n");
}

// MAIN FUNC
//########################################################
t_list *sort_list(t_list* lst, int (*cmp)(int, int)) {
    int swap;
    t_list *start;

    start = lst;

    while (lst != NULL && lst->next != NULL)
    {
        if ((*cmp)(lst->data, lst->next->data) == 0)
	{
            swap = lst->data;
            lst->data = lst->next->data;
            lst->next->data = swap;
            lst = start;
        }
	else
		lst = lst->next;
    }
    return (start);
}

// MAIN
//########################################################
int main() {
    // Create a sample unsorted list
    t_list *list = malloc(sizeof(t_list));
    list->data = 5;
    list->next = malloc(sizeof(t_list));
    list->next->data = 200;
    list->next->next = malloc(sizeof(t_list));
    list->next->next->data = 8;
    list->next->next->next = malloc(sizeof(t_list));
    list->next->next->next->data = 1;
    list->next->next->next->next = NULL;

    printf("Unsorted list: ");
    print_list(list);

    // Sort the list in ascending order
    list = sort_list(list, ascending);

    printf("Sorted list: ");
    print_list(list);

    // Free the allocated memory (important!)
    while (list != NULL) {
        t_list *temp = list;
        list = list->next;
        free(temp);
    }

    return 0;
}