#include<stdio.h>
int calculatePercentage( int science, int math, int sanskrit);
int main(int argc, char const *argv[])
{
    int science = 98;
    int math = 96;
    int sanskrit = 88;

    printf(" Percentage is : %d \n", calculatePercentage(science, math, sanskrit));

    
        return 0;}
int calculatePercentage( int science, int math, int sanskrit){
    return ((science + math + sanskrit)/3);


}




 
 
