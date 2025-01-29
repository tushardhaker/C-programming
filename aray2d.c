#include <stdio.h>
int main(int argc, char const *argv[])
{
    int marks[2][4] = {{ 85, 4, 6, 88}, 
                                       {45, 2, 10, 500}};
    // for (int i = 0; i < 5; i++)
    // {

    // printf("marks of %d student \n",i);
    // scanf("%d", &marks[i]);}
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; i < 4; j++)
        {

            // printf("The value of%d, %d element of array is %d\n", i,j, marks[i][j]);
            printf("%d",marks[i][j]);
        }

       
    }
   return 0; 
}