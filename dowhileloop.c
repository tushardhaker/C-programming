#include<stdio.h>
int main(int argc, char const *argv[])
{
   //sum of first n numbers
   int n;

   printf("Enter number");
   scanf("%d", &n);
   int sum=0;


   for (int i=1; i<=n; i++)
   {
   sum = sum +i;

   }
   printf("sum is %d ", sum); 

   

   
    
    return 0;
}
