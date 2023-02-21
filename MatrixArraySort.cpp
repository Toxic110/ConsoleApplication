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

  printf("\n \n Отсортированный массив \n");

  for(int i = 0; i < counArray; i++) 
  {
    for(int j = 0; j < arrayLength; j++) 
    {
      bool flag = true;
      for(int t = 0; t < arrayLength - (j + 1); t++) 
      {
        if(mas[i][t] > mas[i][t + 1])
        {
          flag = false;
          int temp = mas[i][t];
          mas[i][t] = mas[i][t + 1];
          mas[i][t + 1] = temp;
        }
      }
      if(flag)
      break;
    }
  }

  for(int j = 0; j < counArray; j++) 
  {
    for(int i = 0; i < arrayLength; i++) 
    {
      printf("%4i", mas[j][i]);
    }
    printf("\n");
  }
};