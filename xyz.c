#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x = 4, y=3, z;

  
    z = x-- -y;
    printf("x= %d y= %d z= %d\n", x, y, z);

    return 0;
}
