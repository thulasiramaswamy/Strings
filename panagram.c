#include <stdio.h>
#include <string.h>

int checkPangram(char* str)
{
	char mark[26] = { 0 };
	int i, index;

	for (i = 0; i < strlen(str); i++)
	{
		if ('A' <= str[i] && str[i] <= 'Z')
			index = str[i] - 'A';

		else if ('a' <= str[i] && str[i] <= 'z')
			index = str[i] - 'a';

		mark[index] = 1;
	}

	for (i = 0; i <= 25; i++)
		if (mark[i] == 0)
			return 0;
	return 1;
}
int main()
{
	char str[] = "lazy dog";
	if (checkPangram(str) == 1) 
       printf("%s is a pangram", str);
	else 
       printf("%s is not a pangram", str);
	getchar();
	return 0;
}
