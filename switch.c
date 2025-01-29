#include<stdio.h>
int main(int argc, char const *argv[])
{
    char day;

    printf("enter day (1-7)");
    scanf("%c", &day);
    switch (day)
    {
    case 'm' : printf("monday \n");
     break; 
     case 't' : printf("tuesday \n");
     break;
     case 'w' : printf("wednesday \n");

     break;
     case 'T' : printf("Thursday \n");
     break;
     case 'f' : printf("friday \n");
     break;
     case 's' : printf("saturday \n");
     break;
     case 'S' : printf("Sunday \n");
     break;


     default : printf("not a valid day");





    }
    return 0;

}
       
    

