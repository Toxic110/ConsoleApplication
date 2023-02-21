#include <stdio.h>

int main() {
  int mas[100][100];
  int counArray, arrayLength;
  int flag = true;

  printf("Введите сколько вы хотите заполнить массивов ");
  scanf("%i", &counArray);

  printf("Введите длину массивов ");
  scanf("%i", &arrayLength);

  for(int i = 0; i < counArray; i++) {
    for(int j = 0; j < arrayLength; j++) {
      scanf("%i", &mas[i][j]);
    }
  }

  for(int i = 0; i < counArray; i++) {
    for(int j = 0; j < arrayLength; j++) {
      int tempMas[100][100];
      tempMas[i][j] = mas[j][i];
      printf("%2i", tempMas[i][j]);
    }
    printf("\n");
  }
};