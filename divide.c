#include <stdio.h>
int main()
{
    int m,p,c, total_marks;


    printf("enter mark of maths:");
    scanf("%d", &m);


 printf("enter mark of physics:");
    scanf("%d", &p);

 printf("enter mark of chemistry:");
    scanf("%d", &c);

total_marks = m +p+c;

if (total_marks >120 && total_marks <=300)
{
   if (m>33)
   {
    printf("pass\n");
   } 
   else {
    printf("FAIL\n");
   } 
    

    if (p>33)
   {
    printf("pass\n");
   } 
   else {
    printf("FAIL\n");
   }



   if (c>33)
   {
    printf("pass\n");
   } 
   else {
    printf("FAIL\n");
   }

   
} 
else {
    printf("FAIL.......");
}


    return 0;
} 

