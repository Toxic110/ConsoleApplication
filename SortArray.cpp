#include <stdio.h>

int main() {
  int n;
  int mas[100];
  int flag = true;
  printf("Введите количество элементов массива, но не больше 100 \n");
  scanf("%i", &n);

  for(int i = 0; i < n; i++) {
    scanf("%i", &mas[i]);
  }

  while (flag)
  {
    flag = false;

    for(int i = 0; i < n -1; i++) {
      if(mas[i] > mas[i +1]) {
        int temp = mas[i];
        mas[i] = mas[i + 1];
        mas[i + 1] = temp;

        flag = true;
      }
    }
  }
  

  for(int i = 0; i < n; i++) {
    printf("%2i", mas[i]);
  }
};