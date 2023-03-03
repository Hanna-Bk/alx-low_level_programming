#include "main.h"

/**
 * string_toupper - Change all lowercase letters to uppercase
 * @s: string to make upper
 * Return: return value of upper
 */
 char *string_toupper(char *str)
  9 {
 10         int index = 0;
 11
 12         while (str[index])
 13         {
 14                 if (str[index] >= 'a' && str[index] <= 'z')
 15                         str[index] = str[index] - 32;
 16
 17                 index++;
 18         }
 19
 20         return (str);
 21 }
