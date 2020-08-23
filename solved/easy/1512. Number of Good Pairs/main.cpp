#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  int numIdenticalPairs(vector<int> &nums)
  {
    int pairs = 0;
    for (int i = 0; i < nums.size(); i++)
    {
      for (int j = 0; j < nums.size(); j++)
      {
        if (nums[i] == nums[j] && i < j)
          pairs++;
      }
    }

    return pairs;
  }
};

int main()
{
  vector<int> nums{1, 2, 3, 1, 1, 3};
  Solution sol;
  int output = sol.numIdenticalPairs(nums);
  cout << output << endl;
}