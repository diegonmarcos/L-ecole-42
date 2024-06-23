# ft_lstdelone - `void ft_lstdelone(t_list *lst, void (*del)(void*));`

**Brief:**
Takes as a parameter a node and frees the memory of the node’s content using the function ’del’ given as a parameter and free the node. The memory of ’next’ must not be freed.

**File:** `ft_lstdelone.c` / **Date:** 2024-06-22  
**Author:** Diego N. Marcos <dnepomuc@student.42barcelona.com>

**Library:**



**Description:**  
This function takes a node as a parameter and frees the memory of the node's content using the function `del` passed as a parameter, then frees the node itself. The memory of the node's `next` pointer must not be freed under any circumstance.

**Input Values:**
* `lst`: The address of a pointer to a node.
* `del`: The address of the function used to delete the content of the node.

**Return Value:**
* None.

**Note:**
- The function does not free the `next` pointer of the node. It is the user's responsibility to manage the remaining linked list structure.
- Ensure that the `del` function is valid and capable of correctly freeing the type of content stored in the node.

**Example:**
```c
t_list *node = ft_lstnew("some content"); 
ft_lstdelone(node, free); // Frees the content ("some content") and the node itself.
```
