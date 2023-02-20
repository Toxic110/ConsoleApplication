#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
  int mas[100][100];
  int counArray, arrayLength;

  printf("Введите сколько вы хотите заполнить массивов ");
  scanf("%i", &counArray);

  printf("Введите длину массивов ");
  scanf("%i", &arrayLength);

  srand(time(NULL));

  for(int j = 0; j < counArray; j++) {
    for(int i = 0; i < arrayLength; i++) {
      mas[j][i] = rand() % 10 + (-2);
    }
  }

  for(int j = 0; j < counArray; j++) {
    for(int i = 0; i < arrayLength; i++) {
      printf("%4i", mas[j][i]);
    }
    printf("\n");
  }
};