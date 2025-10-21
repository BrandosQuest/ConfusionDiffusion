#include <stdio.h>
#include <stdlib.h>
#include "LikedListExperiment.h"

void freeList(Node* head) {
    Node* current = head;
    Node* next_node;

    while (current != NULL)
    {
        next_node = current->next;
        //printf("freed: %d\n", current->content);
        //fflush(stdout);
        free(current);
        current = next_node;
    }
}
void addNode(Node ** tail, unsigned char content) {
    (*tail)->content =content;
    (*tail)->next = malloc(sizeof(Node));
    (*tail)->next->next=NULL;
    *tail = (*tail)->next;
}
void printList(Node* head) {
    Node* current = head;
    Node* next_node;
    while (head!=NULL)
    {
        next_node = current->next;

        printf("%d\n",head->content);
        fflush(stdout);
        head=head->next;
        if (next_node->next == NULL)
        {
            return;
        }
        current=next_node;
    }
}


/*int main() {
    Node * head=malloc(sizeof(Node));
    Node * newHead=head;
    Node ** tail=&newHead;
    for (int i = 0; i < 10; ++i)
    {
        addNode(tail,i);
    }
    printList(head);
    printf("\n");
    freeList(head);
}*/