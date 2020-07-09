#include <iostream>
using namespace std;

class Solution
{
public:
  int numJewelsInStones(string J, string S)
  {
    int result = 0;
    for (int i = 0; i < S.length(); i++)
    {
      for (int j = 0; j < J.length(); j++)
      {
        if (S.at(i) == J.at(j))
        {
          result++;
          break;
        }
      }
    }
    return result;
  }
};

int main()
{
  string J = "aA", S = "aAAbbbb";
  Solution solution;
  int output = solution.numJewelsInStones(J, S);

  cout << output;
  cout << endl;
}