#include <stdio.h>

int main() {
  long pin1;
  long int pin2;

  printf("pin1=");
  scanf("%ld", &pin1);
  printf("pin2=");
  scanf("%li", &pin2);

  if((pin1 == 444 && pin2 == 555) || (pin1 == 432 && pin2 == 987))
  {
    printf("OK");
  }
  else
  {
    printf("ERROR");
  };
}