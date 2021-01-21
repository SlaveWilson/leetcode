#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  int maxDepth(string s)
  {
    if (s == "")
      return 0;
    if (s.find('(') == string::npos && s.find(')') == string::npos)
      return 0;

    if (s.front() == '(' && s.back() == ')')
    {
      s.pop_back();
      s.erase(s.begin());
      return 1 + maxDepth(s);
    }

    vector<string> vps;
    string tmp;
    int open_brackets = 0;
    for (char c : s)
    {
      if (c == '(')
      {
        open_brackets++;
      }

      if (open_brackets > 0)
      {
        tmp.push_back(c);
      }

      if (c == ')')
      {
        open_brackets--;
        if (open_brackets == 0)
        {
          vps.push_back(tmp);
          tmp.clear();
        }
      }
    }

    int max = 0;

    for (string s : vps)
    {
      int d = maxDepth(s);
      if (d > max)
        max = d;
    }

    return max;
  }
};

int main()
{
  string s = "1";
  Solution sol;
  int result = sol.maxDepth(s);
  cout << result << endl;
}