//to use declare 2 pointers of type Node

// Node * head=malloc(sizeof(Node));
// Node * newHead=head;
// Node ** tail=&newHead;

//than call addNode on tail
//last call freeList from head

#ifndef CONFUSIONDIFFUSION__LIKEDLISTEXPERIMENT_H
#define CONFUSIONDIFFUSION__LIKEDLISTEXPERIMENT_H

typedef struct Node {
    unsigned char content;
    struct Node* next;
    struct Node* previous;
    unsigned int positionIndex;
} Node;

void freeList(Node* head);
void addNode(Node ** tail, unsigned char content);
void printList(Node* head);

#endif //CONFUSIONDIFFUSION__LIKEDLISTEXPERIMENT_H