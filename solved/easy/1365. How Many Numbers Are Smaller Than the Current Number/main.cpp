#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  vector<int> smallerNumbersThanCurrent(vector<int> &nums)
  {
    size_t n = nums.size();
    vector<int> hash(101, 0);

    for (size_t i = 0; i < n; i++)
    {
      hash[nums[i]]++;
    }

    for (size_t i = 1; i < 101; i++)
    {
      hash[i] += hash[i - 1];
    }

    for (size_t i = 0; i < n; i++)
    {
      nums[i] = nums[i] > 0 ? hash[nums[i] - 1] : 0;
    }

    return nums;
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