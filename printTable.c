#include<stdio.h>
void printTable(int n);
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter number : ");
    scanf("%d", &n);

    printTable(n);//argument/actual parameter / function call

    return 0;
}
void printTable(int n){//parameter/formal parameter
    for (int  i = 1; i <=10; i++)
    {
        printf(" %d \n",i*n);

    }
    
    
}
