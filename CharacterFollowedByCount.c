#include <stdio.h>
#include <string.h>
#define SIZE 26

void printCharWithFreq(char* str)
{
	int i, n = strlen(str);
	int freq[SIZE];
	memset(freq, 0, sizeof(freq));
	for (i = 0; i < n; i++)
		freq[str[i] - 'a']++;

	for (i = 0; i < n; i++) 
	{
		if (freq[str[i] - 'a'] != 0)
		{
			printf("%c %d", str[i], freq[str[i] - 'a']);
			freq[str[i] - 'a'] = 0;
		}
	}
}
int main()
{
	char str[] = "geeksforgeeks";
	printCharWithFreq(str);
	return 0;
}
