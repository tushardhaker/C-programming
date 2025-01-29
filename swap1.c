#include<stdio.h>
void swap(int*x, int*y ) {
    int hello;
    hello=*x;
    *y=*x;
    *x=hello;

    return;
}




int main(int argc, char const *argv[])
{
    int a=5;
    int b=7;
    printf("swap of %d and %d\n",a ,b);
    swap(&a, &b);
    printf("swap of %d and %d\n",a ,b);


    return 0;
}
