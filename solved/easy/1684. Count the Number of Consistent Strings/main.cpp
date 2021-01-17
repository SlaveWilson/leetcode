#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  int countConsistentStrings(string allowed, vector<string> &words)
  {
    int result = 0;
    for (string word : words)
    {
      int matched = 0;
      for (char c : word)
      {
        for (char c_allow : allowed)
        {
          if (c == c_allow)
          {
            matched++;
            break;
          }
        }
      }
      if (matched == word.size())
        result++;
    }
    return result;
  }
};

int main()
{
  string allowed = "abc";
  vector<string> words{"a", "b", "c", "ab", "ac", "bc", "abc"};
  Solution sol;
  int output = sol.countConsistentStrings(allowed, words);
  cout << output << endl;
}