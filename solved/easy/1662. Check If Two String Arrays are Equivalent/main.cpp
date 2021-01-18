#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  bool arrayStringsAreEqual(vector<string> &word1, vector<string> &word2)
  {
    string string1, string2;
    for (string c : word1)
    {
      string1 += c;
    }
    for (string c : word2)
    {
      string2 += c;
    }
    return string1 == string2;
  }
};

int main()
{
  vector<string> word1{"a", "cb"};
  vector<string> word2{"ab", "c"};
  Solution sol;
  bool result = sol.arrayStringsAreEqual(word1, word2);
  cout << result << endl;
}