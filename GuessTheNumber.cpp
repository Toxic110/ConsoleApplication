#include <stdio.h>

int main() {
  int i = 0;

  while (i != 7)
  {
    scanf("%i", &i);

    if(i < 7) 
    {
      printf("Введенное число меньше чем загаданное программой \n");
    }
    else {

      if(i > 7) 
      {
        printf("Введенное число больше чем загаданное программой \n");
      }

    };

    if(i < 10) {
      printf("Введенное число меньше 10 \n");
    }
    else {
      if(i == 10) {
        printf("Введенное число равно 10 \n");
      }
      printf("Введенное число больше 10 \n");
    }

    if(i%2 == 0) {
      printf("Данное число делится на 2 \n");
    }

    if(i%3 == 0) {
      printf("Данное число делится на 3 \n");
    }
  }
  printf("Ура! Вы угодали число!");
  
};