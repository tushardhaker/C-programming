#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter number");
    scanf("%d", &n);
    
   for (int i=1; i<=n; i++)
   {
    if (n%2==1)
    {
       break;
    }
    
    printf("%d\n", i);

   }
   printf("end");
   
   

    


    return 0;
}
