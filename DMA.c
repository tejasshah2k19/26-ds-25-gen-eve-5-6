#include<stdio.h>
#include<stdlib.h>


int main(){

    int a; 
    //pointer 
    int *k; // 4 byte 
    k =(int*) malloc(sizeof(int));//GCC:4 TC:2

    printf("Enter num");
    scanf("%d",k);

    printf(" %d ",*k); 


    //addition of two numbers using DMA 
    
    return 0;
}