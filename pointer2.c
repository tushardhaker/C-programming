#include<stdio.h>
int main(int argc, char const *argv[])
{
    int age = 21;
    int *ptr = &age;
    // value
    printf("%d \n", age);
    printf("%d \n", *ptr);
    printf("%d \n", *(&age));
    
    return 0;
}
