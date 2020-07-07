#include <vector>
#include <iostream>
#include <string>
using namespace std;

class Solution
{
  int total = 0;

public:
  vector<int> runningSum(vector<int> &nums)
  {
    for (auto &i : nums)
    {
      total += i;
      i = total;
    }
    return nums;
  }
};

int main()
{
  vector<int> nums{1, 2, 3, 4};

  Solution solution;
  vector<int> output = solution.runningSum(nums);
  for (auto &i : output)
    std::cout << i << ' ';

  cout << endl;
}