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
  for (int i = 0; i < counArray; i++)
  {
    for (int j = 0; j < arrayLength; j++)
    {
      mas[i][j] = rand()%11;
      mas[i][j] = rand()%11;
    }
  }

  for(int j = 0; j < counArray; j++) 
  {
    for(int i = 0; i < arrayLength; i++) 
    {
      printf("%2i", mas[j][i]);
    }
    printf("\n");
  }

  printf("\n \n Поменять местами первый и последний столбец \n");

   for(int i = 0; i < counArray; i++) 
   {
    int tempMas[100][100];
    tempMas[i][0] = mas[i][0];
    for(int j = 0; j < arrayLength; j++) 
    {
      mas[i][0] = mas[i][arrayLength - 1];
      mas[i][arrayLength - 1] = tempMas[i][0];
      printf("%2i", mas[i][j]);
    }
    printf("\n");
  }
};