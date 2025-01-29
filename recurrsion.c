#include <stdio.h>
// can solve the fibinacci, factorial problems by recurrsion.....
int factorial(int number);
int main(int argc, char const *argv[])
{
  int number;
  printf("the factorial of a number is = %d\n",factorial(7));
 

  return 0;
}

int factorial(int number)
{
  if (number == 1 || number == 0)
  {
    return 1;
  }

  int factorial1 = factorial(number - 1);
  int factorial2 = number * factorial1;
  return factorial2;
}
