#include <stdio.h>
#include <stdlib.h>

/**
 * calculate the total number of nodes by traversing the linked list 
 * 
 * 
*/

struct node {
    int data;
    struct node *next;
};

void node_count(struct node *head);

int main(){
    struct node *head = NULL; // Initialize the head pointer to NULL as an empty list


    head = (struct node *)malloc(sizeof(struct node));
    head->data = 12;
    head->next = NULL;

    struct node *current = head;
    for (int i = 2; i < 5; i++){
        current->next = (struct node *)malloc(sizeof(struct node));
        current = current->next;
        current->data = i;
        current->next = NULL;
    }

    node_count(head);

    // Free the allocated memory
    current = head;
    struct node *temp;
    while (current != NULL) {
        temp = current->next;
        free(current);
        current = temp;
    }

    return 0;
}

void node_count(struct node *head){
    int count = 0;
    if(head == NULL)
        printf("Empty List ");
    
    struct node *ptr = NULL;
    ptr = head;
    while (ptr != NULL){
        count++;
        printf("%d- %d\t",count, ptr->data);
        printf("%p\t",(void *)ptr->next);
        printf("%d\n",ptr->next);
        ptr = ptr->next;
    }

    printf("There are %d nodes", count);
}