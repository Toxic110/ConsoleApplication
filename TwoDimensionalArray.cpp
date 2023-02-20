#include <stdio.h>

int main() {
  int mas[100][100];
  int counArray, arrayLength;

  printf("Введите сколько вы хотите заполнить массивов ");
  scanf("%i", &counArray);

  printf("Введите длину массивов ");
  scanf("%i", &arrayLength);

  for(int j = 0; j < counArray; j++) {
    for(int i = 0; i < arrayLength; i++) {
      scanf("%i", &mas[j][i]);
    }
  }

  for(int j = 0; j < counArray; j++) {
    for(int i = 0; i < arrayLength; i++) {
      printf("%2i", mas[j][i]);
    }
    printf("\n");
  }
};