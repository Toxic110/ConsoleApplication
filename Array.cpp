#include <stdio.h>

int main() {
  int mas[7];

  for(int i = 0; i < 7; i++) {
    mas[i] = i;
  }

  for(int i = 0; i < 7; i++) {
    printf("%2i", mas[i]);
  }
};