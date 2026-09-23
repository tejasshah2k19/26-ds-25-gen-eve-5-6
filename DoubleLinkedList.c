#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head = NULL;
struct node *last = NULL;

//[ NULL |10| &20  ]       [ &10  | 20 | &30 ]        [ &20 | 30 | NULL ]
// head                                                    newNode
//                                                          last

void addNode(int value)
{ // 30

    if (head == NULL)
    {
        head = (struct node *)malloc(sizeof(struct node));
        head->data = value;
        head->next = NULL;
        head->prev = NULL;
        last = head;
    }
    else
    {
        struct node *newNode = (struct node *)malloc(sizeof(struct node));
        newNode->data = value;
        newNode->next = NULL;
        newNode->prev = last;
        last->next = newNode;
        last = newNode;
    }
}

// 10 20 30 40 50|X
// head

void display()
{
    struct node *p = head;

    while (p != NULL)
    {
        printf(" %d ", p->data);
        p = p->next;
    }
}

void countOddNode()
{
    struct node *p = head;
    int count = 0;
    while (p != NULL)
    {
        if (p->data % 2 != 0)
        {
            count++;
        }
        p = p->next;
    }
    printf("\nTotal Odd Nodde = %d ", count);
}

void searchNode(int data){
    struct node *p = head;
    int found =0; //not found 

    while (p != NULL)
    {
        if(p->data == data){
            found = 1; 
            break;            
        }
        p = p->next;
    }

    if(found == 1){
        printf("\n%d found ",data);
    }else{
        printf("\n%d not found ",data); 
    }
}
//
int main()
{

    addNode(10);
    addNode(20);
    addNode(33);
    addNode(40);
    addNode(55);

    display();

    countOddNode(); // 10 20 33 40 55 => 33 55 => 2

    searchNode(55); // found 
    searchNode(550); // not found 
    
  
    return 0;
}