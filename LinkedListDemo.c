#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;
struct node *last = NULL;


//insertion --- at the end ---> 10->20->30->40
void addNode(int num) // 30
{
    if (head == NULL)
    {
        // first insertion
        head = (struct node *)malloc(sizeof(struct node));
        head->data = num;
        head->next = NULL;
        last = head;
    }
    else
    {
        struct node *tmp = (struct node *)malloc(sizeof(struct node));
        tmp->data = num;
        tmp->next = NULL;
        last->next = tmp;
        last = tmp;
    }
}
//head -> next -> next -> next 
//10     20 30 40   50 
//head             last  
void display()
{

    struct node *p;
    printf("\nLinkedList : ");

    p = head;

    while (p != NULL)
    {
        printf(" %d ", p->data); // 10 20 30 40 50 
        p = p->next;
    }
}
//insertion - beg 
//  10 20 30 40 
//  50 
//  50 10 20 30 40 
void addNodeBeg(int num){
    struct node *tmp = (struct node*)malloc(sizeof(struct node));

    tmp->data= num; 
    tmp->next = head; 
    head = tmp; 
}

int countNode(){
    int count=0;
    struct node *p;

    p = head ; 
    while(p!=NULL){
        count++;
        p=p->next;
    }

    return count; 
}
//count all the odd node 
int countOdd(){
}

//count all the even node 
int countEven(){
}


int search(int data){
    struct node *p = head; 
    int found = 0; //not found 
    while(p!=NULL){
        if(p->data == data){
            found  = 1; 
            break;
        }
        p = p->next; 
    }

    if(found==0){
        printf("\n%d not found",data);
    }else{
        printf("\n%d Found",data);
    }

    return found;//1 0 
}
//10 20 30 40 50
//20 30 40 50 

//15    10 20 30 40
//head

void delBeg(){
    //head 
    struct node *p = head; 
    head = head->next; 
    free(p);//
}


int main()
{

    addNode(10);
    addNode(20);
    addNode(30);
    display();//10 20 30 
    addNode(40);
    display();//10 20 30 40
    
    addNodeBeg(15);
    display(); //15 10 20 30 40 
 
 
    printf("\nlength = %d",countNode());//return -> how many nodes we have  ? 

    search(100); // not found 
    search(30); // found 
 
    //15 10 20 30 40 
    delBeg();
    display();//10 20 30 40 

    return 0;
}
//3 