#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  vector<int> createTargetArray(vector<int> &nums, vector<int> &index)
  {
    size_t n = nums.size();
    vector<int> result;
    result.push_back(nums[0]);

    for (size_t i = 1; i < n; i++)
    {
      result.insert(result.begin() + index[i], nums[i]);
    }

    return result;
  }
};

int main()
{
  vector<int> nums{0, 1, 2, 3, 4};
  vector<int> index{0, 1, 2, 2, 1};

  Solution solution;
  vector<int> output = solution.createTargetArray(nums, index);

  for (auto i : output)
    cout << i << " ";
  cout << endl;
}