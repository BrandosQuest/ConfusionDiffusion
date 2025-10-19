
#include <stdio.h>
#include <stdlib.h>
#include "LikedListExperiment.h"

/*typedef struct Node {
    unsigned char content;
    struct Node* next;
} Node;*/

void freeList(Node* head) {
    Node* current = head;
    Node* next_node;

    while (current != NULL)
    {
        // 1. Save the pointer to the next node before we lose it
        next_node = current->next;
        // 2. Free the current node
        //printf("freed: %d\n", current->content);
        free(current);
        // 3. Move on to the next node
        current = next_node;
    }
}
void addNode(Node * tail, unsigned char content) {
    tail->content = content;
    tail->next = malloc(sizeof(Node));
    tail=tail->next;/*
    Node* p = malloc(sizeof(Node));
    (*tail)->content = content;
    p->next = NULL;
    (*tail)->next = p;
    *tail = p;*/
}
/*void addNode(Node ** tail, unsigned char content) {
    printf("%p\n", *tail);
    *tail = malloc(sizeof(Node));
    printf("%p\n", *tail);
    (*tail)->content = content;
    (*tail)->next = NULL;
    printf("%p\n", (*tail)->next);
    printf("%p\n", &(*tail)->next);
    //(*tail)->next=malloc(sizeof(Node));
    *tail=(*tail)->next;
    printf("\n");
}*/
void printList(Node* head) {
    while (head!=NULL)
    {
        printf("%d\n",head->content);
        fflush(stdout);
        //printf("%p\n",head->next);
        head=head->next;
    }
}


int main() {
    /*Node * head=NULL;
    head=malloc(sizeof(Node));
    Node * tail = head;*/
    Node * head=malloc(sizeof(Node));;
    Node * tail=head;
    /*head->next=NULL;
    head->content=1;*/

    /*head->next=malloc(sizeof(Node));
    head->next->next=NULL;
    head->next->content=2;

    head->next->next=malloc(sizeof(Node));
    head->next->next->next=NULL;
    head->next->next->content=3;*/


    /*addNode(&tail,4);
    addNode(&tail,5);*/
    for (int i = 0; i < 10; ++i)
    {
        addNode(tail,i);
        //printf("%d\n",i);
    }

    printList(head);
    /*while (pointer!=NULL)
    {
        printf("%d\n",pointer->content);
        printf("%p\n",pointer->next);
        pointer=pointer->next;
    }*/

    freeList(head);
}