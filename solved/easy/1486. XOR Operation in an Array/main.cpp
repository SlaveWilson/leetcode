#include <iostream>
using namespace std;

class Solution
{
public:
  int xorOperation(int n, int start)
  {
    int result = 0;
    for (size_t i = 0; i < n; i++)
    {
      result ^= start + (2 * i);
    }
    return result;
  }
};

int main()
{
  int n = 4, start = 3;
  Solution solution;
  int output = solution.xorOperation(n, start);

  cout << output;
  cout << endl;
}