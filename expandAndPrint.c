/*
 * AUTHOR : THULASI VEGGALAM
 * Copyright (C) 2020
 */

/*
 * i/p : a3b4c5d6
 * o/p : aaa bbbb ccccc dddddd
 * This Program needs to be improved for more than one digit number
 */

#include <stdio.h>
#include <string.h>

void expandAndPrint(char x, int Cnt)
{
 int i;
 for (i = 0; i < Cnt; i++)
  printf("%c", x);
}
int main()
{
 char* str = "A11B4C5E6";// "A33B44C555E6780";
 char t;
 int digit;
 while (*str)
 {
 t = *str;
 str++;
 digit = strtol(str, &str, 10);
 expandAndPrint(t, digit);
 }
 return 0;
}
