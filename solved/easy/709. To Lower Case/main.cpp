#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
  string toLowerCase(string str)
  {
    for (int i = 0; i < str.size(); i++)
    {
      int c = str[i];
      if (c < 'a' && c >= 'A')
      {
        c += ('a' - 'A');
        str[i] = c;
      }
    }
    return str;
  }
};

int main()
{
  string str = "al&phaBET";
  Solution solution;
  string output = solution.toLowerCase(str);
  cout << output << endl;
}