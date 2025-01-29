#include<stdio.h>
struct student
{
   int id;
   int marks;
   char fav_char;
};
int main(int argc, char const *argv[])
{
    struct student Tushar, Puneet ,Yash;
    Tushar.id=1;
    Puneet.id=2;
    Yash.id=3;

    Tushar.marks=10;
    Puneet.marks=20;
    Yash.marks=30;

    Tushar.fav_char='a';
    Puneet.fav_char='b';
    Yash.fav_char='c';

    printf("all students got %d, %d, %d marks\n", Tushar.marks,Puneet.marks,Yash.marks);
    
    
    return 0;
}

