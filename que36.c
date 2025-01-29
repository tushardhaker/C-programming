#include<stdio.h>
int main(int argc, char const *argv[])
{
    int x; 
    int *ptr;

    ptr = &x;
    *ptr = 1;
    
    printf("x= %d \n", x);//1
    printf("*ptr= %d \n", *ptr);//1

    *ptr+=5;
    printf("x= %d \n", x);
    printf("*ptr= %d \n", *ptr);

    (*ptr)++;
    printf("x= %d \n", x);
    printf("*ptr= %d \n", *ptr);

    
    return 0;
}
