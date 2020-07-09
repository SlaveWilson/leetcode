#include <iostream>
using namespace std;

class Solution
{
public:
  int numberOfSteps(int num)
  {
    int result = 0;
    while (num > 0)
    {
      if ((num & 1) == 1)
        num -= 1;
      else
        num >>= 1;
      result++;
    }
    return result;
  }
};

int main()
{
  int input = 14;

  Solution solution;
  const int output = solution.numberOfSteps(input);

  cout << output;
  cout << endl;
}