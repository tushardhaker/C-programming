#include <stdio.h>

int main(int argc, char const *argv[])
{

    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; i <= i; j++)
        {
            if ((i + j) % 2 == 0)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
        printf("\n");
    }

    getch();
}