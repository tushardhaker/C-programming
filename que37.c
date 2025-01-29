#include<stdio.h>
int main(int argc, char const *argv[])
{
    // for print value type *
    // for print adress type &
    
    int i=5;
    int *ptr=&i;
    int **pptr=&ptr;

    printf("%d\n", **pptr);
    
    return 0;
}
