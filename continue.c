#include<stdio.h>
int main(int argc, char const *argv[])
{
    
 for (int i = 5; i <= 50; i++)
 {
    if (i%2==0)//skip
    {
       continue;
    }
    
    printf("%d \n", i);
 }
 
   


    return 0;
}
