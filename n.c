//used to break multiple words
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int  i, n;
   printf("Enter number = ");
   scanf("%d",&n);
   
  
    for ( i = 4; i <= 3*n+1; i+=3)
    {
       printf("%d\n", i);

    }
    
    return 0;
}


   

