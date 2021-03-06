// Time Complexity : O(n)
// Lowercase and Uppercase are considered the same

#include<iostream> 
using namespace std; 
const int MAX_CHAR = 26; 

string missingChars(string str)
{
 bool present[MAX_CHAR] = {false};
 int i;
 for (i = 0 ; i < str.length(); i++)
 {
  if (str[i] >= 'a' && str[i] <= 'z')
    present[str[i]-'a'] = true;

  else if (str[i] >= 'A' && str[i] <= 'Z')
    present[str[i]-'A'] = true;
 }

 string res = "";

 for ( i = 0 ; i < MAX_CHAR ; i++)
  if (present[i] == false)
   res.push_back((char)(i+'a'));
   
 return res;
}
int main()
{
 string str = "The quick brown fox jumps over the dog";
 cout << " Missing Characters : " << missingChars(str);
 return 0;
}
