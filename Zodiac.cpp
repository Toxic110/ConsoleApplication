#include <stdio.h>

int main() {
  int day, month, year;

  printf("Введите день ");
  scanf("%i", &day);

  printf("Введите месяц ");
  scanf("%i", &month);

  printf("Введите год ");
  scanf("%i", &year);

  if(year % 4 == 0) {
    printf("Это высокосный год ");
  }

  switch (year % 12)
  {
  case 0:
    printf("Это год обезьяны ");
    break;
  
  case 1:
    printf("Это год петуха ");
    break;
  
  case 2:
    printf("Это год собаки ");
    break;
  
  case 3:
    printf("Это год свиньи ");
    break;
  
  case 4:
    printf("Это год крысы ");
    break;
  
  case 5:
    printf("Это год быка ");
    break;
  
  case 6:
    printf("Это год тигра ");
    break;
  
  case 7:
    printf("Это год кролика ");
    break;
  
  case 8:
    printf("Это год дракона ");
    break;
  
  case 9:
    printf("Это год змеи ");
    break;
  
  case 10:
    printf("Это год лошади ");
    break;
  
  case 11:
    printf("Это год овцы ");
    break;
  
  default:
    break;
  }

  bool beforeMonth = day > 21;
  bool afterMonth = day < 22;

  if((month == 12 && beforeMonth) || (month == 1 && afterMonth)) {
    printf("Знак зодиака Козерог");
  }

  if((month == 1 && beforeMonth) || (month == 2 && afterMonth)) {
     printf("Знак зодиака Водолей");
  }

  if((month == 2 && beforeMonth) || (month == 3 && afterMonth)) {
     printf("Знак зодиака Рыбы");
  }

  if((month == 3 && beforeMonth) || (month == 4 && afterMonth)) {
     printf("Знак зодиака Овен");
  }

  if((month == 4 && beforeMonth) || (month == 5 && afterMonth)) {
     printf("Знак зодиака Телец");
  }

  if((month == 5 && beforeMonth) || (month == 6 && afterMonth)) {
     printf("Знак зодиака Близнецы");
  }

  if((month == 6 && beforeMonth) || (month == 7 && afterMonth)) {
     printf("Знак зодиака Рак");
  }

  if((month == 7 && beforeMonth) || (month == 8 && afterMonth)) {
     printf("Знак зодиака Лев");
  }

  if((month == 8 && beforeMonth) || (month == 9 && afterMonth)) {
     printf("Знак зодиака Дева");
  }

  if((month == 9 && beforeMonth) || (month == 10 && afterMonth)) {
     printf("Знак зодиака Весы");
  }

  if((month == 10 && beforeMonth) || (month == 11 && afterMonth)) {
     printf("Знак зодиака Скорпион");
  }

  if((month == 11 && beforeMonth) || (month == 12 && afterMonth)) {
     printf("Знак зодиака Стрелец");
  }
};