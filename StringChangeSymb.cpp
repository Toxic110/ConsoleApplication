#include <stdio.h>
#include <string.h>

const char* change_symbols(char str[], char symbol)
{
    int len = strlen(str);
    str[0] = symbol;
    str[len-1] = symbol;  
    return str;  
}

const char* trim(char str[])
{
    int len = strlen(str);
    for (int i = len-1; i >= 0; i--)
    {
        if (str[i] != ' ')
        {
            str[i+1] = '\0';
            break;
        }
    }
    
    char temp[100];
    int ind;
    len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (str[i] != ' ')
        {
            ind = i;
            break;
        }
    }

    for (int i = 0; i < len; i++)
    {
        temp[i] = str[i+ind];
    }
    strcpy(str, temp);
      
    return str;  
}

int main()
{
    char str[100];
    char symbol;

    // 1
    printf("Введите символ: ");
    scanf("%c", &symbol);
    printf("Введите строку: ");
    scanf("%s", str);   
    printf("Новая страка с заменой символа: %s\n", change_symbols(str, symbol));

    printf("\n", str);

    // 2
    const char str2[] = "  Hello  world  "; 
    strcpy(str, str2);
    printf("Строка: %s\n", str);
    printf("Строка без пробелов: %s\n", trim(str));
}