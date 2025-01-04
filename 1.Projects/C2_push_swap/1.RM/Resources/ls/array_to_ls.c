
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
DLLst* arrayToDoublyLinkedList(int arr[], int n) {
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

    DLLst* list = arrayToDoublyLinkedList(arr, n);

    if (list != NULL) {
        printList(list);
        freeList(list);
    }

    return 0;
}

