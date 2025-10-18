/*#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    unsigned char content;
    struct Node* next;
} Node;

void addNode(Node * head, unsigned char content) {
    //pointer newNode is a pointer to memory(not initialized to 0, need calloc) on the heap of size of the struct Node
    /*
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->content = content;
    newNode->next = NULL;
    tail->next = newNode;
    return newNode;
    #1#

    if (head != NULL)
    {
        addNode(head->next, content);
        return;
    }
    //pointer newNode is a pointer to memory(not initialized to 0, need calloc) on the heap of size of the struct Node
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->next = NULL;
    newNode->content = content;
}
void printList(Node* head) {
    Node* nextNode = head;
    while (nextNode->next != NULL)
    {
        nextNode = nextNode->next;
        printf("%c", nextNode->content);
    }
}
void freeNodes(Node * head) {
    if (head != NULL)
    {
        freeNodes(head->next);
        free(head);
        return;
    }
    free(head);/*
    Node* nextNode = head;
    while (nextNode->next != NULL)
    {
        nextNode = nextNode->next;
        free(nextNode);
        free(head);
        head = NULL;
    }
    free(head);
    head = NULL;#1#

}
/*
free(ptr);
ptr = NULL;#1#

int main() {
    Node* head=NULL;
    for (int i = 0; i < 10; i++)
    {
        addNode(head, i);
    }
    printList(head);
    freeNodes(head);
    return 0;
}*/

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    unsigned char content;
    struct Node* next;
} Node;

void freeList(Node* Head) {
    Node* current = Head;
    Node* next_node;

    while (current != NULL)
    {
        // 1. Save the pointer to the next node before we lose it
        next_node = current->next;

        // 2. Free the current node
        printf("freed: %d\n", current->content);
        free(current);

        // 3. Move on to the next node
        current = next_node;
    }
}
void addNode(Node * head, unsigned char content) {
    //to do
}


int main() {
    Node * p;
    p=malloc(sizeof(Node));
    p->next=NULL;
    p->content=1;

    p->next=malloc(sizeof(Node));
    p->next->next=NULL;
    p->next->content=2;

    p->next->next=malloc(sizeof(Node));
    p->next->next->next=NULL;
    p->next->next->content=3;

    Node * pointer = p;
    while (pointer!=NULL)
    {
        printf("%d\n",pointer->content);
        printf("%p\n",pointer->next);
        pointer=pointer->next;
    }

    pointer = p;
    freeList(pointer);
}