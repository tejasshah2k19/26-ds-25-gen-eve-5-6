#include <stdio.h>
#define SIZE 5

int cq[SIZE];

int front = -1;
int rear = -1;
void enQueue(int data)
{

    if (front == 0 && rear == SIZE - 1)
    {
        printf("\nQueue full for %d ", data);
    }
    else if (rear == front - 1)
    {
        printf("\nQueue full for %d ", data);
    }
    else if (rear == SIZE - 1)
    {
        rear = 0;
        cq[rear] = data;
    }
    else
    {
        // normal
        rear++;
        cq[rear] = data;

        // first time
        if (front == -1)
        {
            front = 0;
        }
    }
}

void display()
{

    printf("\nQueue Data : ");
    if (front <= rear)
    {
        for (int i = front; i <= rear; i++)
        {
            printf(" %d ", cq[i]);
        }
    }
    else
    {

        for (int i = front; i < SIZE; i++)
        {
            printf(" %d ", cq[i]);
        }

        for (int i = 0; i <= rear; i++)
        {
            printf(" %d ", cq[i]);
        }
    }
}

void deQueue()
{
    if (front == -1)
    {
        printf("\nQueue empty : ");
    }
    else if (front == rear)
    {
        printf("\n%d removed ", cq[front]);
        front = -1;
        rear = -1;
    }
    else
    {
        printf("\n%d removed ", cq[front]);
        front++;
    }
}

int main()
{

    enQueue(10);
    enQueue(20);
    enQueue(30);
    enQueue(40);
    enQueue(50);
    display();   // 10 20 30 40 50
    enQueue(60); // full 60
    deQueue();   // 10
    deQueue();   // 20
    deQueue();   // 30

    display(); //40 50 

    enQueue(60);
    enQueue(70);
    enQueue(80);
    enQueue(90);//full
    display();//40 50 60 70 80  
    return 0;
}