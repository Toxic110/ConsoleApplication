#include <stdio.h>

int main() {
  int j = 5;

  for (int i = 1; i < 11; i++)
  {
    printf("%i * %i = %i \n", j, i, j * i);
  }
};