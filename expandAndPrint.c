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
#include <stdlib.h>

void expandAndPrint(char x, long Cnt)
{
 int i;
 for (i = 0; i < Cnt; i++)
	printf("%c", x);
}
int main()
{
 char* str = "A11B4C5E6";
 char t;
 long digit;
 while (*str)
 {
	 t = *str;
	 str++;
	 digit = strtol(str, &str, 10);
	 expandAndPrint(t, digit);
 }
 getchar();
 return 0;
}
