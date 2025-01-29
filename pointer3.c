#include<stdio.h>
void square(int n);
void _square(int *n);

int main(int argc, char const *argv[])
{
    int number =5;

    square(number);
    printf("number = %d", number);
  
  _square(&number);
   printf("number = %d", number);

    return 0;
}
// call by value.
void square(int n){
    n = n*n;
    printf("suqare = %d \n", n);

}
void _square(int *n){
    *n = (*n) * (*n);
     printf("suqare = %d \n", *n);
}