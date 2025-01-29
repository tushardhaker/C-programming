#include<stdio.h>
int main(int argc, char const *argv[])
{
    int k;
    printf("enter value of   k" ,k);
    scanf("%d",&k); 
    if (k%4==0)
    {
printf("leap year")  ;
  }
  else if (!k%4==0)
  {
    printf("Not a leap year");

  }
  
  
    return 0;
}
