#include <stdio.h>
#define SIZE 2

struct student
{
    char name[30];
    int maths;
    int sci;
    int eng;
    float perc;
    char grade;
};

int main()
{

    // struct student s;

    struct student s[SIZE]; // 5
    struct student *p;
    // int a;
    // int *p;//address variable int
    // p = &a;
    // float x;
    // float *o;
    // o=&x;

    p = &s[0]; // base

    for (int i = 0; i < SIZE; i++)
    {
        
        printf("\nEnter name and marks of three subjects");
        scanf("%s%d%d%d", &p->name, &p->maths, &p->eng, &p->sci);

        p->perc = (p->maths + p->sci + p->eng) / 3.0;

        if (p->perc >= 35)
        {
            p->grade = 'P';
        }
        else
        {
            p->grade = 'F';
        }
    
        p++;   
    }


    p=&s[0];
    for (int i = 0; i < SIZE; i++)
    {

        printf("Name = %s\nMaths = %d\nSci = %d\nEng = %d", p->name, p->maths, p->sci, p->eng);
        p++; 
    }

    return 0;
}