#include <stdio.h>

int main() {
  int a, b;

  printf("Введите значение А = ");
  scanf("%i", &a);

  printf("Введите значение B = ");
  scanf("%i", &b);

  if (a > b)
  {
    printf("Больше");
  }
  else
  {
    if(a == b)
    {
      printf("Равны");
    }
    else
    {
      printf("Меньше");
    }
  }
};