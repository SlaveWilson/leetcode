#include <iostream>
using namespace std;

class Solution
{
public:
  int numberOfMatches(int n)
  {
    if (n == 1)
      return 0;

    // even
    if ((n & 1) == 0)
    {
      int matches = n / 2;
      return n / 2 + numberOfMatches(n / 2);
    }
    // odd
    else
    {
      return (n - 1) / 2 + numberOfMatches((n - 1) / 2 + 1);
    }
  }
};

int main()
{
  int n = 14;
  Solution sol;
  int result = sol.numberOfMatches(n);
  cout << result << endl;
}