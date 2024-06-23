# ft_lstlast - `t_list *ft_lstlast(t_list *lst);`

**Brief:**
Returns the last node of the linked list.

**File:** `ft_lstlast.c` / **Date:** 2024-06-22  
**Author:** Diego N. Marcos <dnepomuc@student.42barcelona.com>

**Library/Header:**



**Description:**  
This function traverses the linked list pointed to by `lst` and returns a pointer to the last node of the list.

**Input Values:**  
* `lst`: The address of a pointer to the first link of a list.

**Return Value:**  
* The last node of the list.
* NULL if the list is empty.

**Note:**
- The function does not modify the list.
- If `lst` is NULL, the function returns NULL as there is no last element in an empty list.

**Example:**  
```c
t_list *head = NULL;
// ... add elements to the list ...

t_list *last_node = ft_lstlast(head);
if (last_node) {
    printf("Content of the last node: %s\n", (char *)last_node->content);
} else {
    printf("The list is empty.\n");
}
