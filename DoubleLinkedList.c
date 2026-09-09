#include<stdio.h>
#include<stdlib.h> 


struct node{
    int data; 
    struct node *next;
    struct node *prev;
};

struct node *head = NULL;
struct node *last = NULL; 

//[ NULL |10| &20  ]       [ &10  | 20 | &30 ]        [ &20 | 30 | NULL ]
// head                                                    newNode
//                                                          last 

void addNode(int value){//30 
    
    if(head == NULL){
        head =(struct node*) malloc(sizeof(struct node));
        head->data = value;
        head->next = NULL; 
        head->prev = NULL; 
        last = head; 
    }else{
        struct node *newNode =(struct node*) malloc(sizeof(struct node)); 
        newNode->data = value;    
        newNode->next = NULL; 
        newNode->prev = last; 
        last->next = newNode;
        last = newNode;

    }

}

int main(){

    addNode(10); 
    addNode(20);
    addNode(30);
    return 0; 
}