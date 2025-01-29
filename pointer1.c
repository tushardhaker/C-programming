#include<stdio.h>
int main(int argc, char const *argv[])
{
    int age = 21;
    int *ptr = &age;
    

    printf("%u \n", &age);
    printf("%u \n", ptr);

    printf("%u \n", &ptr);
    
    return 0;
}
