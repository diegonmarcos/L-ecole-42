# ft_lstclear - `void ft_lstclear(t_list **lst, void (*del)(void *));`

**Brief:**
Deletes and frees all elements of a linked list.

**File:** `ft_lstclear.c` / **Date:** 2024-06-22  
**Author:** Diego N. Marcos <dnepomuc@student.42barcelona.com>

**Library/Header:**



**Description:**  
This function deletes and frees all the elements of the linked list pointed to by `lst`. The function `del` passed as a parameter is used to free the content of each element.

**Input Values:**  
* `lst`: The address of a pointer to a node.
* `del`: The address of the function used to delete the content of the node.

**Return Value:**  
* None.

**Note:**
- The list pointed to by `lst` will be set to NULL after the function completes.
- Ensure that the `del` function is valid and capable of correctly freeing the content of the nodes.

**Example:**  
```c
t_list *head = NULL;
// ... add elements to the list ...

ft_lstclear(&head, free);  // Delete and free all nodes in the list
// head is now NULL
