#include <stdio.h>
#define SIZE 5

int arr[] = {10, 15, 35, 50, 5};

void arraySum(int sum, int i) // 10 , 1
{

    sum = sum + arr[i]; //
    i++;                // 2
    if (i < SIZE)
    {
        arraySum(sum, i);
    }
    else
    {
        printf(" %d ", sum);
    }
}

int main()
{

    arraySum(0, 0); // sum=0, i=0
    //arrayMax() => 50 
    return 0;
}