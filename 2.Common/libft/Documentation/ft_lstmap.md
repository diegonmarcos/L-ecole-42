# ft_lstmap - **Synopsis:** - `t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));`

**Brief:**
Iterates a list applying the function ’f’ to each node’s content and creating a new list resulting of the successive applications of the function ’f’.

**File:** `ft_lstmap.c` / **Date:** 2024-06-22  
**Author:** Diego N. Marcos <dnepomuc@student.42barcelona.com>

**Library:**



**Description:**  
Iterates the list ’lst’ and applies the function ’f’ to the content of each node. Creates a new list resulting of the successive applications of the function ’f’. The ’del’ function is used to delete the content of a node if needed.

**Input Values:**
* `lst`: The address of a pointer to a node.
* `f`: The address of the function used to iterate on the list.
* `del`: The address of the function used to delete the content of a node if needed.

**Return Value:**  
* The new list.
* NULL if the allocation fails.

**Note:**  
-  The function returns NULL if the allocation fails or if the input list is empty.

**Example:**  
```c
// Function to increment an integer
void *increment(void *content) {
    int *num = (int *)content;
    (*num)++;
    return (num);
}

t_list *head = NULL;
// ... add elements to the list ...

t_list *new_list = ft_lstmap(head, increment, free); 
// new_list is a new list with each integer element incremented by 1.
```