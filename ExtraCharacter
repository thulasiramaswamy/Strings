// Time Complexity : O(n)
// Auxiliary Space : O(n)
#include <iostream>
#include <unordered_map>
using namespace std;

char findExtraCharcter(string strA, string strB)
{
 unordered_map<char, int> m1;

 for (int i = 0; i < strB.length(); i++)
  m1[strB[i]]++;

 // for (auto p = m1.begin(); p != m1.end(); p++)
 // cout << "(" << p->first << ", " << p->second << ")\n";
  
 for (int i = 0; i < strA.length(); i++)
  m1[strA[i]]--;
	
 // for (auto p = m1.begin(); p != m1.end(); p++)
 // cout << "(" << p->first << ", " << p->second << ")\n";
  
 for (auto h1 = m1.begin(); h1 != m1.end(); h1++)
 {
  if (h1->second == 1)
	return h1->first;
 }
}
int main() 
{
 string strA = "abcd"; 
 string strB = "cbead"; 
 findExtraCharcter(strA, strB); 
 cout << "Extra Character : " << findExtraCharcter(strA, strB);
 return 0;
}
