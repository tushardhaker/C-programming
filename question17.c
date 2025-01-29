#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter number");
    scanf("%d", &n);
    int i=n;
 do
 {
    printf("%d\n",i);

 } while (n%7==0);
 
   printf("Thank you");
   


    return 0;
}
