#include <stdio.h>
#define SIZE 3

struct student
{

    char name[30];
    int maths;
    int sci;
    int eng;
    float perc;
    char grade;
};

struct student s[SIZE];

void getData()
{
    for (int i = 0; i < SIZE; i++)
    {
        printf("\nEnter name and marks of three subjects");
        scanf("%s%d%d%d", &s[i].name, &s[i].maths, &s[i].sci, &s[i].eng);
    }
}

void calcPerAndGrade()
{

    for (int i = 0; i < SIZE; i++)
    {

        s[i].perc = (s[i].maths + s[i].sci + s[i].eng) / 3.0;
        // P F
        if (s[i].perc >= 35)
        {
            s[i].grade = 'P';
        }
        else
        {
            s[i].grade = 'F';
        }
    }
}

void display()
{
    printf("\nName\tMaths\tSci\tEng\tPerc\tGrade\n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%s\t%d\t%d\t%d\t%f\t%c\n", s[i].name, s[i].maths, s[i].sci, s[i].eng, s[i].perc, s[i].grade);
    }
}

int main()
{
    getData();
    calcPerAndGrade();
    display();
    return 0;
}