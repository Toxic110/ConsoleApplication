#include <stdio.h>

int main() {
  int n;
  int mas[100];
  printf("Введите количество элементов массива, но не больше 100 \n");
  scanf("%i", &n);

  for(int i = 0; i < n; i++) {
    scanf("%i", &mas[i]);
  }

  for(int i = 0; i < n; i++) {
    printf("%2i", mas[i]);
  }
};