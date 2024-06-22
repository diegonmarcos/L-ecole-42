# ft_lstsize - **Synopsis:** - `int	ft_lstsize(t_list *lst);`

**Brief:**  
Counts the number of nodes in a linked list.

**File:** `ft_lstsize.c` / **Date:** 2024-06-22  
**Author:** Diego N. Marcos <dnepomuc@student.42barcelona.com>

**Library:**



**Description:**  
This function iterates through the linked list, starting from the node pointed to by `lst`, and counts the number of nodes until it reaches the end of the list (a node whose `next` pointer is NULL).

**Input Values:**  
* `lst`: The address of a pointer to the first link of a list.

**Return Value:**  
* The number of nodes in the list.
* 0 if the list is empty (i.e., `lst` is NULL).

**Note:**
- The function does not modify the list in any way.

**Example:**  
```c
t_list *head = NULL;
// ... add elements to the list ...

int size = ft_lstsize(head);
printf("The list has %d nodes.\n", size);
