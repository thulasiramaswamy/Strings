// The ispunct() function checks whether a character is a punctuation character or not.
// int ispunct(int ch);

#include <stdio.h>
#include <ctype.h>
int main()
{
 char str[] = "welcome! to GeeksForGeeks, ";

 int i = 0, count = 0;
 while (str[i])
 {
  if (ispunct(str[i])) count++;
  i++;
 }
 printf("Sentence contains %d punctuation characters.\n", count);
 return 0;
}
