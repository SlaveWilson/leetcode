#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  vector<int> smallerNumbersThanCurrent(vector<int> &nums)
  {
    size_t n = nums.size();
    vector<int> result(n, 0);

    for (size_t i = 0; i < n; i++)
    {
      for (size_t j = 0; j < n; j++)
      {
        if (nums[i] > nums[j])
          result[i]++;
      }
    }

    return result;
  }
};

int main()
{
  vector<int> nums{8, 1, 2, 2, 3};
  Solution solution;
  vector<int> output = solution.smallerNumbersThanCurrent(nums);

  for (auto i : output)
    cout << i << " ";

  cout << endl;
}