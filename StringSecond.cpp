#include <stdio.h>
#include <string.h>

int main() {
  // Задание 1
  const int bufsize = 4096;
  char str[bufsize];

  printf("Введите слово, мы удалим первую букву \n");
  fgets(str, bufsize, stdin);

  for(int j = 0; j < strlen(str); j++) 
  {
    str[j] = str[j + 1];
  }

  printf("%s", str);

  // Задание 2

  char newStr[100] = "Lorem";
  char bufStr[100];
  int strLength = strlen(newStr);

  for(int j = strlen(newStr); j > 0; j--) 
  {
    bufStr[strLength - j] = newStr[j - 1];
  }  

  printf("%s", bufStr);
};