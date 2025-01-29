#include<stdio.h>
void namaste();
void bonjour();
int main(int argc, char const *argv[])
{
    printf("Enter f for french and i for indian : ");
    char ch;
    scanf("%c", &ch);
    if (ch=='i')
    {
        printf("Namaste\n");

    } else
    {
        printf("Bonjour\n");
    }
    
    return 0;
}
void namaste(){
    printf("Namaste \n");

}
void bonjour(){
    printf("Bonjour \n");

}


                                                        
