#include <stdio.h>
#define SIZE 7

int arr[SIZE];

void insertItem(int location, int data)
{
    // 5.45

    if (linearSearch(data) == 1)
    {
        printf("\nElement already inserted : %d ", data);
    }
    else
    {
        for (int i = SIZE - 1; i >= location - 1; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[location - 1] = data;
    }
}

int linearSearch(int item)
{
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] == item)
        {
            return 1; // true - found
        }
    }
    return 0; // false -not found
}

void display()
{
    printf("\nArray Elements : ");
    for (int i = 0; i < SIZE; i++)
    {
        printf(" %d", arr[i]);
    }
}

void removeItem(int location)
{
    //
    for (int i = location - 1; i < SIZE - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[SIZE - 1] = 0;
}

int main()
{

    insertItem(1, 10);
    insertItem(2, 20);
    insertItem(1, 30);
    insertItem(1, 40);
    insertItem(3, 50);
    insertItem(3, 60);
    display(); // 40	30	60	50	10	20
    removeItem(1);
    display(); // 30 60 50 10 20
    return 0;
}