#include<stdio.h>
int fib(int n);
int main(int argc, char const *argv[])
{
    printf("sum is : %d", fib(5));
    return 0;
}
int fib(int n){
    if (n==0)
    {
    return 0;
    }
    if (n==1)
    {
        return 1;
    }
    
    
    int fibNm2 = fib(n-2);
    int fibNm1 = fib(n-1);
    int fibN = fibNm2 + fibNm1;
    return fibN;
}
// int fib(int n);

// int main(int argc, char const *argv[])
// {
    
//    printf("the value of %d", fib(5)) ;
//    return 0;}
   

// int fib(int n){
//     if (n==1)
//     {
//         return 1;
//     }
//     if (n==0)
//     {
//         return 0;
//     }
    
//     int fib2 = fib(n-2);
//     int fib1 = fib(n-1);
//     int fibN = fib1 + fib2;
    
//     return fibN;
//     }




 
 

