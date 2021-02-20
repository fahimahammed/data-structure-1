#include<stdio.h>
#include<stdlib.h>

//create node
struct Node{
    int data;
    struct Node *next;
};
int main(){
    struct Node *a = NULL;
    struct Node *b = NULL;
    struct Node *c = NULL;

    //memory allocation with malloc()
    //a = (struct Node*)malloc(sizeof(struct Node));
    //b = (struct Node*)malloc(sizeof(struct Node));
    //c = (struct Node*)malloc(sizeof(struct Node));

    //Memory allocation with calloc()
    a = (struct Node*)calloc(1, sizeof(struct Node));
    b = (struct Node*)calloc(1, sizeof(struct Node));
    c = (struct Node*)calloc(1, sizeof(struct Node));

    //set data value
    a->data = 20;
    b->data = 30;
    c->data = 40;

    //set address
    a->next = b;
    b->next = c;
    c->next = NULL;

    //print data
    while(a != NULL){
        printf(" %d ->",a->data);
        a = a->next;
    }
    return 0;
}
