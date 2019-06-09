#include <iostream>
using namespace std;

int main()
{
 string str = "Hello???@@##$ World#$% Welcome%$^to$%^&2020";
 for (int i = 0, len = str.size(); i < len; i++)
 {
  if (ispunct(str[i]))
  {
   str.erase(i--, 1);
   len = str.size();
  }
 }
 cout << str;
 return 0;
}
