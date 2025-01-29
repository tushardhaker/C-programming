#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr[4];
    int *ptr = arr;
    for (int i = 0; i < 4; i++)
        
    {// input
        printf("%d index = ", i);
        scanf("%d", &arr);
    }
//output
for (int  i = 0; i < 4; i++)
{
    printf("%d index is = %d \n", i, arr[i]);

}

    return 0;
}
