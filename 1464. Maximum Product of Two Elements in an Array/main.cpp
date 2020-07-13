#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  int maxProduct(vector<int> &nums)
  {
    int j = 0, k = 0;

    for (int i = 0; i < nums.size(); i++)
    {
      if (nums[i] > j)
      {
        k = j;
        j = nums[i];
      }
      else if (nums[i] > k)
      {
        k = nums[i];
      }
    }

    return (j - 1) * (k - 1);
  }
};

int main()
{
  vector<int> nums{3, 4, 5, 2};
  Solution solution;
  int output = solution.maxProduct(nums);

  cout << output << endl;
}