#include <stdio.h>

int main() {
  int mas[100];
  int length = 0;
  int min, max;
  min = max = mas[0];
  int sum = 0;

  printf("Сколько чисел вы хотели бы ввести? \n");
  scanf("%i", &length);

  for(int i = 0; i < length; i++) {
    scanf("%i", &mas[i]);

    if(mas[i] > max) {
      max = mas[i];
    }

    if(mas[i] < min) {
      min = mas[i];
    }

    sum += mas[i];
  }

  printf("Максимальное введенное число = %i\n", max);

  printf("Минимальное введенное число = %i\n", min);
  
  printf("Сумма введеных чисел равна %i\n", sum);

  printf("Среднее арефметическое значение равно %f\n", (float)sum / (float)length);
  
};