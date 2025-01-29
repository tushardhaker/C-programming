#include<stdio.h>
int fac(int n);
int main(int argc, char const *argv[])
{
    printf("factorial is : %d \n", fac(6));
    
    return 0;
}
int fac(int n){
    if (n == 1)
    {
        return 1;
    }
    
    int facNm1 = fac(n-1);
    int facN = n*facNm1;
    return facN;

}

 
