#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter number");
    scanf("%d", &n);
    
    int sum=0;
    for (int i=1; i<=n; i++)
    {
        sum = sum +i;

    }
    printf("%d", sum);

    for (int i = n; i>=1; i--)
    {
        printf("%d\n", i);

    }


    return 0;
}
