#include <stdio.h>
#include <string.h>

int main() {
  // Задание 1
  char str[100];

  printf("Введите строку не более 100 символов \n");
  gets(str);

  printf("%c вывод только 2 символа из строки", str[1]);

  // Задание 2
  char someStr[100] = "Hello";
  int someStrLength = strlen(someStr);

  printf("%c вывод последнего элемента строки", someStr[someStrLength - 1]);
  printf("\n");

  char firstChar = someStr[0];
  char lastChar = someStr[someStrLength - 1];
  char newSomeStr[100];

  for(int i = 0; i < someStrLength; i++)
  {
    newSomeStr[i] = someStr[i];
    newSomeStr[0] = lastChar;
    newSomeStr[someStrLength - 1] = firstChar;
  }

  printf("%s Новая строка \n", newSomeStr);
  printf("\n");

  // Задание 3
  char newStr[100] = "Hello";

  int i;
  printf("Введите номер символа который надо удалить, но не больше 5 \n");
  scanf("%i", &i);

  for(int j = i - 1; j < strlen(newStr); j++) {
    newStr[j] = newStr[j + 1];
  }

  printf("%s", newStr);
};