#include<stdio.h>
int main(int argc, char const *argv[])
{
int i, age;
for ( i = 0; i < 10; i++)
{
   printf("%d value of age is :", i);
   scanf("%d",&age);

   if (age>10)
   {
    continue;
   }
   printf("hello");
}

    return 0;
}
//cntinue 