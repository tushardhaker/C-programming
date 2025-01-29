#include<stdio.h>
int main(int argc, char const *argv[])
{
    int marks;
    printf("enter any marks(0-100) ");
    scanf("%d", &marks);

    if (marks <=30)
    {
        printf("c grade \n");
    }
    else if (marks >30 && marks <70)
    {
        printf("B grade \n");
    }
    else if (marks >70 && marks <90)
    {
        printf("A grade \n");

    }
    else
    {
        printf("A+ grade /n");

    }
    return 0;
}

