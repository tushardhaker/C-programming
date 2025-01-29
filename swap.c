#include<stdio.h>
void swap(int a, int b);
void _swap(int *a, int *b);
int main(int argc, char const *argv[])
{
    int x=3, y=5;

    _swap(&x, &y);

    printf("x= %d\n  y= %d\n", x,y);



    return 0;
}
void _swap(int *a, int *b){
int t = *a;
*a=*b;
*b=t;

}