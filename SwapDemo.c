#include <stdio.h>

void swap(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
   
}

int main()
{

    int a = 10;
    int b = 20;

    printf(" %d  %d ", a, b); // 10 20
    // swap() ->return type  , argument
    swap(&a, &b);//10 20 
    printf(" %d  %d ", a, b); // 20 10

    return 0;
}