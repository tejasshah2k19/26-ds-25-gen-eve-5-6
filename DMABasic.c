#include <stdio.h>

void add()
{

    int a = 10;
    int b = 20;
    int *p = &a;
    int *q = &b;

    int c = *p + *q;

    printf("\nsum = %d",c); 

}

int main()
{
    int *q;
    float *x;
    double *d;
    char *c;

    int a;

    printf(" %d %d ", sizeof(int), sizeof(a));                                                 // 4 4 TC{2 2}
    printf("\nchar:%d int:%d float:%d double:%d", sizeof(c), sizeof(q), sizeof(x), sizeof(d)); // 4 4 TC{2 2}

    add();
    return 0;
}