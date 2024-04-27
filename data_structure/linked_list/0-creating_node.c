#include <stdio.h>  // for standard inpout/output
#include <stdlib.h> // to calling malloc function


struct node{
    int data; 
    struct node *next;
};


int main(int argc, char **argv){
    struct node *head = NULL;   
    head = (struct node *)malloc(sizeof(struct node));    // the head now has a value, it's the adresse of the first data

    head->data = 89;     //data has value and adresse now
    head->next = NULL;    

    printf("%d\n", head->data);
    printf("%d\n", head->next);

    //create the second Node
    struct node *current;
    current = (struct node *)malloc(sizeof(struct node));
    current->data = 23;
    current->next = NULL;
    head->next = current;

    printf("Second Node\n");
    printf("%d\n", current->data);
    printf("%d\n", current->next);
    printf("%d\n", head->next); 
    
    //create the third Node
    // struct node *current2;   //not good
    // current2 = (struct node *)malloc(sizeof(struct node));
    // current2->data = 12;
    // current2->next = NULL;
    // current->next = current2;

    // printf("Third Node\n");       
    // printf("%d\n", current2->data);
    // printf("%d\n", current->next);
    // printf("%d\n", current2->next); 
    // printf("%d\n", head->next);

    printf("Third Node\n");   
    current  = malloc(sizeof(struct node));
    current->data = 12;
    current->next = NULL;
    head->next->next = current;   

    printf("1- %d\n", current->data);
    printf("2- %d\n", current->next);
    printf("3- %d\n", head->next);
    printf("4- %d\n", head->next->next);
    printf("5- %d\n", head->next->data);
    printf("6- %d\n", head->next->next->data);



    return 0;
}