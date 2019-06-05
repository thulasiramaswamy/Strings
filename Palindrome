#include <stdio.h>
#include <string.h>

int isPalindrome(char *str, int size)
{
 int i, j;
 for( i = 0, j = size - 1 ; i < size/2 ; i++, j-- )
 {
  if(str[i] != str[j]) return 0;
 }
 return 1;
}
int main()
{
 char str[] = "abcdcba";
 int size = strlen(str);
 if(isPalindrome(str, size)) printf("yes");
 else printf("no");
 return 0;
}
