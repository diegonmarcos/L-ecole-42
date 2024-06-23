# ft_lstadd_front - `void ft_lstadd_front(t_list **lst, t_list *new);`

**Brief:**
Adds a new node to the beginning of a linked list.

**File:** `ft_lstadd_front.c` / **Date:** 2024-06-22  
**Author:** Diego N. Marcos <dnepomuc@student.42barcelona.com>

**Library/Header:**



**Description:**  
This function adds the new node `new` at the beginning (head) of the linked list pointed to by `lst`.  If `lst` is NULL, it's updated to point to the new node.

**Input Values:**  
* `lst`: The address of a pointer to the first link of a list.
* `new`: The address of a pointer to the node to be added to the list.

**Return Value:**  
* None.

**Note:**  
- If either `lst` or `new` is NULL, no action is taken. 
- The function modifies the original list in place, so it's important to pass the address of the list pointer.

**Example:**  
```c
t_list *head = NULL;
t_list *new_node = ft_lstnew("new node");
ft_lstadd_front(&head, new_node); // Add new_node to the beginning (now head)
t_list *another_node = ft_lstnew("another node");
ft_lstadd_front(&head, another_node); // Add another_node before new_node
```
