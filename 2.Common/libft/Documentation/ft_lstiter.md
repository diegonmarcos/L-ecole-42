# ft_lstiter - **Synopsis:** - `void ft_lstiter(t_list *lst, void (*f)(void *));`

**Brief:**
Iterates the list `lst` and applies the function `f` to the content of each node.

**File:** `ft_lstiter.c` / **Date:** 2024-06-22  
**Author:** Diego N. Marcos <dnepomuc@student.42barcelona.com>

**Library:**



**Description:**  
This function iterates through the linked list starting at the node pointed to by `lst`.  For each node, it applies the function `f` to the node's content.

**Input Values:**  
* `lst`: The address of a pointer to a node.
* `f`: A function pointer to a function that takes a `void *` argument and returns nothing.

**Return Value:**  
* None.

**Note:**  
- The function does not modify the list structure itself, only the content of each node.
- Ensure that the function `f` is valid and does not attempt to modify or free the list nodes themselves.

**Example:**  
```c
// Function to print the content of a node (assuming the content is a string)
void print_content(void *content) {
    printf("%s\n", (char *)content);
}

t_list *head = NULL;
// ... add elements to the list ...

ft_lstiter(head, print_content); // Print the content of each node in the list
