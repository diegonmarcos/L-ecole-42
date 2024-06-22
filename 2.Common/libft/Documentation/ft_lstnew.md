# ft_lstnew - **Synopsis:** - `t_list *ft_lstnew(void *content);`

**Brief:**
Creates a new node for a linked list.

**File:** `ft_lstnew.c` / **Date:** 2024-06-22  
**Author:** Diego N. Marcos <dnepomuc@student.42barcelona.com>

**Library:**



**Description:**
This function allocates memory for a new node in a linked list and initializes its members. The `content` field of the new node is set to the `content` argument, and the `next` field is set to `NULL`.

**Input Values:**
* `content`: The content to be stored in the new node. This can be a pointer to any data type.

**Return Value:**
* The newly created node (`t_list *`).
* `NULL` if memory allocation fails.

**Note:**
- The caller is responsible for freeing the memory allocated for the new node when it's no longer needed.
- You can use `ft_lstadd_front` or `ft_lstadd_back` to add the new node to an existing linked list.

**Example:**
```c
t_list *new_node = ft_lstnew("Hello, world!"); 
// Creates a new node with the string "Hello, world!" as its content.
