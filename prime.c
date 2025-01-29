#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("enter a number = \n");
    scanf("%d", &n);

    if (n%1==0 && n%(n)==0)
    {
        printf("it is a prime no.");
    }
    

    
    
    return 0;
}
