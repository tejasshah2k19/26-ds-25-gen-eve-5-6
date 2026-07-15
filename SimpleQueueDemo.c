#include <stdio.h>
#define SIZE 5

int queue[SIZE];

int front = -1;
int rear = -1;

void enQueue(int data)
{

    if (rear == SIZE - 1)
    {
        printf("\nqueue full for %d", data);
    }
    else
    {
        rear++;
        queue[rear] = data;

        // first time insertion
        if (front == -1)
        {
            front = 0;
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
        printf("\n%d removed ", queue[front]);
        front = -1;
        rear = -1;
    }
    else
    {
        printf("\n%d removed ", queue[front]);
        front++;
    }
}

void display()
{
    if (front == -1)
    {
        printf("\nQueue Empty ");
    }
    else
    {
        printf("\nQueue : ");
        for (int i = front; i <= rear; i++)
        {
            printf(" %d", queue[i]);
        }
    }
}

int main()
{

    enQueue(10);
    enQueue(20);
    enQueue(30);

    display(); // 10 20 30

    enQueue(40); //

    enQueue(50); //

    enQueue(60); // full

    display(); // 10 20 30 40 50

    deQueue(); // 10

    // enQueue(50)

    // enQueue(60)
    display(); // 20 30 40 50

    deQueue(); // 20
    deQueue(); // 30
    display(); //  40 50

    enQueue(600); // full
    return 0;
}
  
