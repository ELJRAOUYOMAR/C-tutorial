#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

int main(){
    // create the head Node
    struct Node *head;
    head = malloc(sizeof(struct Node));
    printf("head: %d\n", head);
    printf("head: %d\n", sizeof(struct Node));
    head->data = 3;

    //create the second Node
    struct Node* second;
    second = malloc(sizeof(struct Node));
    printf("head: %d\n", second);

    second->data = 7;
    head->next = second; 

    //create the third Node
    struct Node* third;
    third = malloc(sizeof(struct Node));
    third->data = 9;
    second->next = third;

    //create the tail Node
    struct Node* tail;
    tail = (struct Node*)malloc(sizeof(struct Node));
    tail->data =0;
    third->next = tail;

    //because it is  the last Node 
    tail->next = NULL;

    struct Node* current = head;
    while (current != NULL)
    {
        printf("Data: %d\n", current->data);
        current = current->next;
    }

    return 0;
    

}
