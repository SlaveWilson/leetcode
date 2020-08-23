#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
  int balancedStringSplit(string s)
  {
    int count = 0, l = 0, r = 0;
    for (char c : s)
    {
      if (c == 'R')
        r++;
      else
        l++;
      if (r == l)
        count++;
    }
    return count;
  }
};

int main()
{
  string s = "RRLRRLRLLLRL";
  Solution solution;
  int output = solution.balancedStringSplit(s);
  cout << output << endl;
}