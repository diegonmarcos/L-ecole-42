# ft_lstadd_back - `void ft_lstadd_back(t_list **lst, t_list *new);`

**Brief:**
Adds a new node to the end of a linked list.

**File:** `ft_lstadd_back.c` / **Date:** 2024-06-22  
**Author:** Diego N. Marcos <dnepomuc@student.42barcelona.com>

**Library/Header:**



**Description:**  
This function appends the node `new` to the end of the linked list pointed to by `lst`.  If the list is empty, the new node becomes the head of the list. 

**Input Values:**  
* `lst`: The address of a pointer to the first link of a list.
* `new`: The address of a pointer to the node to be added to the list.

**Return Value:**  
* None.

**Note:**  
-  The list pointed to by `lst` must be valid and correctly initialized.  
-  The `new` node will be added even if it's NULL (resulting in a list with a NULL terminator).

**Example:**  
```c
t_list *head = NULL;
t_list *new_node = ft_lstnew("new node");
ft_lstadd_back(&head, new_node); // Add new_node to the end (now head)
t_list *another_node = ft_lstnew("another node");
ft_lstadd_back(&head, another_node); // Add another_node to the end
