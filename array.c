#include<stdio.h>
//array = collection of a similiar data type stored at memory location......
int main(int argc, char const *argv[])
{
    int marks[3];
    printf("enter physics : ");
    scanf("%d", &marks[0]);

     printf("enter chemistry : ");
    scanf("%d", &marks[1]);

     printf("enter maths : ");
    scanf("%d", &marks[2]);

    printf("physics= %d, chemistry= %d, maths= %d", marks[0], marks[1], marks[2]);


    return 0;
}
