// Input : 127
// Output : Integer

// Input : 199.7
// Output : String - dot is considered as string character

// Input : 122B
// Output : String

#include <iostream>
using namespace std;

// isdigit() - C Library Function

bool isNumber(string s)
{
 for (int i = 0; i < s.length(); i++)
 {
  if (isdigit(s[i]) == false) return false;
 }
return true;
}
int main()
{
 string str = "6790";
 if (isNumber(str)) cout << "Integer";
 else cout << "String";
 return 0;
}
