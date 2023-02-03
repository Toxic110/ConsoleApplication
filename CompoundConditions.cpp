#include <stdio.h>

int main() {
  int pin1, pin2;

  printf("pin1=");
  scanf("%i", &pin1);
  printf("pin2=");
  scanf("%i", &pin2);

  if(pin1 == 444 && pin2 == 555)
  {
    printf("OK");
  }
  else
  {
    printf("ERROR");
  };
}