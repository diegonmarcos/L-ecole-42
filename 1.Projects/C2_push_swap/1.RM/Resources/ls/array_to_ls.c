/*
Meta Data:

	name:DOUBLY LINKED LIST FROM ARRAY
	date: 2021-10-07
	function: arrayToDoublyLinkedList(arr, n);
	input: An array of integers and its size.
	output: A doubly linked list containing the elements of the input array.
	functions:
		- Node* createNode(int data, int index);
		- DLLst* arrayToDoublyLinkedList(int arr[], int n);
		- void printList(DLLst* list);
		- void freeList(DLLst* list);

Explanation:

	1. Node Structure:
	data: Stores the integer value from the array.
	index: Stores the index of the element in the original array.
	prev: Pointer to the previous node in the list.
	next: Pointer to the next node in the list.

	2. DoublyLinkedList Structure:
	head: Pointer to the first node (head) of the list.
	tail: Pointer to the last node (tail) of the list.

	3. createNode(int data, int index):
	Allocates memory for a new Node.
	Initializes the data, index, prev, and next fields.
	Returns a pointer to the newly created node.
	Includes error handling for memory allocation failure.

	4. arrayToDoublyLinkedList(int arr[], int n):
	Allocates memory for a DoublyLinkedList structure.
	Initializes head and tail to NULL (empty list).
	Iterates through the input array arr:
	Creates a new node using createNode() with the current element's data and index.
	If the list is empty (head is NULL):
	Sets both head and tail to the new node.
	Otherwise:
	Connects the current tail's next to the new node.
	Sets the new node's prev to the current tail.
	Updates the tail to the new node.
	Returns a pointer to the DoublyLinkedList.
	Includes error handling to free allocated memory if createNode() fails.

	5. printList(DoublyLinkedList* list):
	Iterates through the list from head to tail using the next pointers.
	Prints the data and index of each node.
	Prints the data and index of the head and tail nodes separately for easy verification.

	6. freeList(DoublyLinkedList* list):
	Iterates through the list, freeing each Node.
	Frees the DoublyLinkedList structure itself.
*/

#include <stdio.h>
#include <stdlib.h>

// Structure for a doubly linked list node
typedef struct Node {
    int data;
    int index;
    struct Node* prev;
    struct Node* next;
} Node;

// Structure for the doubly linked list
typedef struct DLLst {
    Node* head;
    Node* tail;
} DLLst;

// Function to create a new node
Node* createNode(int data, int index) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        return NULL;
    }
    newNode->data = data;
    newNode->index = index;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// Function to convert an array to a doubly linked list
DLLst* arrayToDLinkedList(int arr[], int n) {
    DLLst* list = (DLLst*)malloc(sizeof(DLLst));
    if (list == NULL) {
        printf("Memory allocation failed!\n");
        return NULL;
    }
    list->head = NULL;
    list->tail = NULL;

    for (int i = 0; i < n; i++) {
        Node* newNode = createNode(arr[i], i);
        if (newNode == NULL) {
            // Handle memory allocation failure for node (e.g., free allocated nodes and list)
            
            //Freeing allocated memory on failure
            Node* current = list->head;
            while(current != NULL){
                Node* next = current->next;
                free(current);
                current = next;
            }
            free(list);
            return NULL;
        }

        if (list->head == NULL) {
            // If the list is empty, set the new node as both head and tail
            list->head = newNode;
            list->tail = newNode;
        } else {
            // Add the new node to the end of the list
            list->tail->next = newNode;
            newNode->prev = list->tail;
            list->tail = newNode;
        }
    }

    return list;
}

// Function to print the doubly linked list
void printList(DLLst* list) {
    Node* current = list->head;
    printf("Doubly Linked List: ");
    while (current != NULL) {
        printf("(%d, %d) ", current->data, current->index);
        current = current->next;
    }
    printf("\n");

    if (list->head != NULL) {
      printf("Head: (%d, %d)\n", list->head->data, list->head->index);
    }
    
    if (list->tail != NULL) {
       printf("Tail: (%d, %d)\n", list->tail->data, list->tail->index);
    }
}
// Function to free the memory allocated for the doubly linked list
void freeList(DLLst* list) {
    Node* current = list->head;
    while (current != NULL) {
        Node* next = current->next;
        free(current);
        current = next;
    }
    free(list);
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
	
    int n = sizeof(arr) / sizeof(arr[0]);

    DLLst* list = arrayToDLinkedList(arr, n);

    if (list != NULL) {
        printList(list);
        freeList(list);
    }

    return 0;
}

