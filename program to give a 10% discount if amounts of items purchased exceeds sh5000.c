#include <stdio.h>

int main ()
{
  int purchase;

  printf("Enter your purchase total amount");
  scanf("%d", &purchase);

  if (purchase > 5000)
  {
    printf("You will receive a 0.1 discount");
  }
  else{
    printf("You will not receive a 0.1 discount");



    return 0;
  }
