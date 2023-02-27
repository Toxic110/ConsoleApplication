#include <stdio.h>
#include <stdlib.h>

int fillArray(int array[100], int length) 
{
  for(int i = 0; i < length; i++) {
    array[i] = rand() % 10;
  }

  for(int i = 0; i < length; i++) {
    printf("%2i", array[i]);
  }

  printf("\n");

  return array[length];
};

int main() 
{
  int mas1[100], mas2[100];

  fillArray(mas1, 5);
  fillArray(mas2, 10);

  return 1;
}