// C program to demonstrate working of isalpha() and isdigit()

#include<stdio.h>
#include<stdlib.h>

int main()
{
 char str[] = "12abc12";

 int alphabet = 0, number = 0, i;
 for (i=0; str[i]!= '\0'; i++)
 {
  if (isalpha(str[i]) != 0) alphabet++;
  else if (isdigit(str[i]) != 0) number++;
 }
 printf("\nAlphabets = %d, Decimal_digits = %d\n", alphabet, number);
 return 0;
}
