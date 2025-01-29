#include<stdio.h>
float convertTemp(float celsius);
int main(int argc, char const *argv[])
{
   float far = convertTemp(3.41/40);
    printf("Far is : %f", far);
  return 0;
}
float convertTemp(float celsius){
 float far = celsius * 9/5 + 32;
 return far;

}

 
 
