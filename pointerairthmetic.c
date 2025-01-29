#include<stdio.h>
int main(int argc, char const *argv[])
{
 int age = 20;
 int _age = 22;
int *ptr = &age;
int *_ptr = &_age;

printf("%u, %udifference is = %u\n", ptr,_ptr, ptr-_ptr);


    return 0;
}
 