#include <stdio.h>

int main() {
  int length = 0;
  int min = 0, max = 0;
  int sum = 0;
  bool isStart = false;

  printf("Сколько чисел вы хотели бы ввести? \n");
  scanf("%i", &length);

  for(int i = 0; i < length; i++) {
    int num;

    scanf("%i", &num);

    if(!isStart) {
      min = num;
      isStart = true;
    }

    if(num < min && isStart) {
      min = num;
    }

    if(num > max) {
      max = num;
    }

    sum += num;
  }

  printf("Максимальное введенное число = %i\n", max);

  printf("Минимальное введенное число = %i\n", min);
  
  printf("Сумма введеных чисел равна %i\n", sum);

  printf("Среднее арефметическое значение равно %f\n", (float)sum / (float)length);
  
};