#include <iostream>
#include <string.h>
using namespace std;

#define SIZE 26

void printCharWithFreq(string str)
{
	int n = str.size();
	int freq[SIZE];    // hash table
	memset(freq, 0, sizeof(freq));
	for (int i = 0; i < n; i++)
		freq[str[i] - 'a']++;
    
	for (int i = 0; i < n; i++) 
  {
		if (freq[str[i] - 'a'] != 0) 
    {
			cout << str[i] << freq[str[i] - 'a'] << " ";
      freq[str[i] - 'a'] = 0;
		}
	}
}
int main()
{
	string str = "hello world";
	printCharWithFreq(str);
	return 0;
}
