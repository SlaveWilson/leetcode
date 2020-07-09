#include <iostream>
using namespace std;

class Solution
{
public:
  int numJewelsInStones(string J, string S)
  {
    sort(S.begin(), S.end());
    sort(J.begin(), J.end());
    int result = 0;
    for (char c : J)
    {
      if (binary_search(S.begin() + result, S.end(), c))
        result += upper_bound(S.begin() + result, S.end(), c) - lower_bound(S.begin() + result, S.end(), c);
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