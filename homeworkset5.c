#include<stdio.h>
void printHot();
void printcold();
int main(int argc, char const *argv[])
{
    int n;
    printf("enter temp. : ");
    scanf("%d", &n);
if (n>100)
{
    printf("Hot \n"); 
} else
{
    printf("Cold \n");
}
    return 0;
}
void printHot(){
    printf("Hot \n"); }
    
void printcold(){
    printf("Cold \n");
}

                                                                             

