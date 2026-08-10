#include <stdio.h>

void print()
{
    printf(" hello ");
    print();
}

void pingpong()
{
    printf(" pingpong ");
}

void pong()
{
    printf(" pong ");
    pingpong();
    printf(" pong end ");
}

void ping()
{
    printf(" ping ");
    pong();
    printf(" ping end ");
}

void greet(int count) // 3
{
    printf(" %d ", count); // hi hi hi  1 2 3
    count++;               // 4
    if (count <= 3)
    {
        greet(count); // 3
    }
}
//santa(5)
void santa(int count)
{
    printf(" %d ", count);
    count--;
    if (count >= 1)
    {
        santa(count);
    }
}

void banta(int count)//1 
{
    count++; // 2 
    if (count <= 5)
    {
        banta(count); // 3
    }
    printf(" %d ", count); //6 
}

int main()
{

    // santa(5); // 5 4 3 2 1

    banta(1); // 5 4 3 2 1
    return 0;
}
// banta(1) => banta(2) => banta(3) => banta(4)
// infinite
// stack overflow
// BASE CASE
