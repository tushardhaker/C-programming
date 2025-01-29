#include<stdio.h>
int main(int argc, char const *argv[])
{
   char ab;
   printf("enter character");
   scanf("%c", &ab);

   if (ab >='A' && ab <='Z')
   {
    printf("upper case \n");

   } else if (ab >='a' && ab <='z')
   {
    printf("lower case \n");
   } else
   {
    printf("not a english letter \n");
    
   }
   
   
   

    return 0;
}

