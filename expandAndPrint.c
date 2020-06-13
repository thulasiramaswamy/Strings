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
	printf(" ");
}
int main()
{
	char* str = "a3b4c5d6";
	int i, y;

	for (i = 0; i < strlen(str); i++)
	{
		if (isdigit(str[i]) != 0)
		{
			y = str[i] - '0';			
			expandAndPrint(str[i - 1], y);
		}			
	}
	getchar();
	return 0;
}
