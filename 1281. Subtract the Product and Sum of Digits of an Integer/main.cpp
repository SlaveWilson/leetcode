#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
  int subtractProductAndSum(int n)
  {
    string str = to_string(n);
    int product = 1;
    int sum = 0;
    for (auto c : str)
    {
      int digit = c - '0';
      product *= digit;
      sum += digit;
    }
    return product - sum;
  }
};

int main()
{
  int n = 234;
  Solution solution;
  int output = solution.subtractProductAndSum(n);

  cout << output << endl;
}