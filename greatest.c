#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x, y, z;
    printf("enter value of x");
    scanf("%d", &x);

    printf("enter value of y");
    scanf("%d", &y);

    printf("enter value of z");
    scanf("%d", &z);

    if (x > y && x > z)
        
    {
        printf("%d is max", x);
    }
     if (y > x && y > z)
    {
        printf("%d is max : ", y);
    }

    if(z>x && z>y)
    {
        printf("%d is max", z);
    }

    return 0;
}
