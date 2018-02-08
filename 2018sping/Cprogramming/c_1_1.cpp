#include <iostream>
#include "stdio.h"

using namespace std;

int main()
{
  int a;
  //printf("please input your number\n");
  scanf("%d", &a);
  printf("I have %d dollars.\n", a);
  printf("I want to buy: \na book.");
  switch(a) {
    case 1:
      printf("Monday");
      break;
    case 2:
      printf("Tuesday");
    default:
      printf("Illegal");
  }
  return 0;
}
